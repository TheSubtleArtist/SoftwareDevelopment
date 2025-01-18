import java.io.*;

    
public class MessageLeaks {
    
    public static void main(String args[]) throws IOException {
        String user = "admin";
        String passwd = "Password!123";
        // creat a reader which has a built-in buffer
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter username: ");
        String username = reader.readLine();
        System.out.print("Enter password: ");
        String password = reader.readLine();
        if (!user.equals(username)) {
            // bad practice to tell the user they have enetered an incorrect credential
            System.out.println("Invalid Username.");
            return;
        }
        if (!passwd.equals(password)) {
            // bad practice to tell the user they have enetered an incorrect credential
            System.out.println("Invalid password.");
            return;
        }
        System.out.println("Authentication successful.");
    }
}
