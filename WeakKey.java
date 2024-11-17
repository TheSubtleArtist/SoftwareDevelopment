
// access all the functionality in the javax.crypto extension
import javax.crypto.*;
// java cryptography architecture
import java.security.*;
// importing the specific tool 
import javax.crypto.spec.SecretKeySpec;

// Public class name should match the file name
// make this class publicly callable
public class WeakKey {
 
   //declare the min function
   // use of void indicates it will not return a value
   // String [] args provides access to additional arguments and strings if necessary
   // the throws exception catches any general errors and pushes it higher in the stack and the program stops running.
   public static void main (String[] args) throws Exception {
        // hardcoded secret key stored in contiguous locations in memory
        // .getBytes converts the string to an array of bytes
        byte[] key = "ABCDEFGHIJKLMNOP".getBytes();
        // .getBytes to convert a string to an array of bytes
        byte[] plaintext = "This is a secret message".getBytes();

        // get access to the "AES" library and assign that access to a Cipher object "c"
        // doing anything with c give access to AES encryption
        Cipher c = Cipher.getInstance("AES");
        // create a variable k as a new SecretKeySpec to create a key of type AES
        // k now holds the secret key in a format that the c cipher can use
        SecretKeySpec k = new SecretKeySpec(key,"AES");
        // intialize the c into ENCRYPT mode using the k secret key
        // mode must be specified;can also put into DECRYPT_MODE 
        c.init(Cipher.ENCRYPT_MODE,k);

        // create a new byte array called cyphertext
        // perform the final encryption using c and the plaintext and store into the ciphertext byte array
        byte[] ciphertext = c.doFinal(plaintext);


        // for each byte in in ciphertext print the byte in hexadecimal format
        // missing brackets in this loop
        // java allows for missing brackets if there is only one line of code in the for loop
        for (byte aByte : ciphertext)
            System.out.print(String.format("%02X",aByte));
        System.out.println();
    }
}

/*
 * When compiling a java program, there is a class file created.
 * compiling this results in the creation of WeakKey.class
 * Running strings on the class file reveals a log, including values assigned to variables, like the key variable
 * 
 */