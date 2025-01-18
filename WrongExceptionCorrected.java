import java.io.File;
import java.io.FileReader;
import java.io.IOException;

public class WrongExceptionCorrected {
        // Add the ability to throw an exception for handling somwhere else
        public static void main(String args[]) throws Exception {
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
        // change to handle the specific exception of file not found, and throws all other errors
        // best practice handle specific exceptions where they need to be handled
        catch (IOException Exception) {
            // in the event the file doesn't exist
            System.out.println ("File not found.");
        }
    }  
}
