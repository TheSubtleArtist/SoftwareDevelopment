import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MessageLeaksCorrected {
        public static void main(String args[]) throws IOException {
        String user = "admin";
        String passwd = "Password!123";
        // creat a reader which has a built-in buffer
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter username: ");
        String username = reader.readLine();
        System.out.print("Enter password: ");
        String password = reader.readLine();
        if (!user.equals(username) || !passwd.equals(password)) {
            System.out.println("Authentication failed.");
            return;
        }
        System.out.println("Authentication successful.");
    }
}
