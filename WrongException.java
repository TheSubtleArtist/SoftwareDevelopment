import java.io.*;
import java.lang.*;

// read a file in chunks and then print to command line
public class WrongException {
    public static void main(String args[]) {
        String filename = args[0];
        // allow a user input to determine the size of the buffer
        int chunkSize = Integer.parseInt (args[1]);
        // determines how many time the file needs to be read
        double iterations = 0.0;
        try {
            // file reader
            FileReader fr = new FileReader(filename);
            char a[] = new char[chunkSize];
            long fileLength = new File(filename).length();
            // calculate the length of the file
            // math.ceil rounds any value up to next whole number to complete necessary reads
            iterations = Math.ceil(fileLength/chunkSize);
            // actual functionality
            for (int i = 0; i < iterations; i++) {
                fr.read(a,0,chunkSize);
                System.out.print(a);
            }
            System.out.println();
        }
        catch (Exception e) {
            // in the event the file doesn't exist
            System.out.println ("File not found.");
        }
    }    
}

/*
 * calling the program: java WrongException <buffer size>
 * problem number 1: user provides a chunksize of zero creates an undefined chunkSize, catch block will still say the file is not found
 */
