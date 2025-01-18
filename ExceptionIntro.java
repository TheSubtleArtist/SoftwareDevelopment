public class ExceptionIntro {
// throwing exceptions means throwing them to the next higher function
// throwing expcptions is not handling exceptions
// throwing in main() crashes applciation
// throwing in any other function requires handling at some place, possibly at the main level


public static void main(String args[]) {
    int a = -1;
    try {
        a = 5/0;
    } 
    // handle only aritmetic errors, but no others like a file read error
    // any other error gets thrown up the stack
    catch (ArithmeticException e) {
        System.out.println(e.toString());
        a=0;
    } 
    // always executed, regardless of any other action
    // will happen even if the program is broken
    // bad idea to output to users
    // good for clean up actions prior to crash
    finally {
        System.out.println("The value of a is "+a+".");
    }
}
}
