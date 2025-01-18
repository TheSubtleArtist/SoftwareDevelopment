import java.util.concurrent.Semaphore;

class SafeThread extends Thread {
    volatile static int total;
    static Semaphore mutex = new Semaphore(1);

    public void Count () throws InterruptedException {
        // introduce mutex
        mutex.acquire();
        int t = total +1;
        Thread.sleep((int) Math.random() * 10);
        total = t;
        mutex.release();
    }

    public void Counter(int n) throws InterruptedException{
        for (int i = 0; i <n; i++)
            Count();
    }
    // call the Counter function and sends 1000 as the arguement
    public void run () {
        try {
            Counter(1000);
        }
        catch (InterruptedException e) {
            return;
        }
    }
    public static int getTotal() {
        return total;
    }
}
public class RaceConditionCorrected {
        public static void main(String args[]) throws InterruptedException{
        SafeThread t1 = new SafeThread();
        SafeThread t2 = new SafeThread();
        t1.start();
        t2.start();
        t1.join();
        t2.join();
        System.out.println("The total is "+t1.getTotal());
    }
}
