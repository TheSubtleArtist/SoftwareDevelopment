class VulnerableThread extends Thread {
    // shared variable among all threads
    // volatile tell each thread that the thread should continuously update it's version of total
    volatile static int total;
    
    public void Count () throws InterruptedException {
        // thread one get here and executes
        // if thread two executes this before thread one gets to "total = t" there is a conflict at total
        // both threads will read the same total and and execute the +1
        // both will update the value of total
        // one potential problem is an OffByOne error
        int t = total +1;
        // intentionally sleeps something and allows for one process to interfere with another
        // the "random" sleep could even cause a regression
        // one thread could have a very short sleep or a very long sleep allowing the other thread to have multiple iterations and set total to a lower number
        Thread.sleep((int) Math.random() * 10);
        total = t;
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

public class RaceCondition {
    public static void main(String args[]) throws InterruptedException{
        VulnerableThread t1 = new VulnerableThread();
        VulnerableThread t2 = new VulnerableThread();
        t1.start();
        t2.start();
        t1.join();
        t2.join();
        System.out.println("The total is "+ t1.getTotal());
    }
}
