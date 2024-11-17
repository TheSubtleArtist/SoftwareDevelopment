public class EmptyHandler {
    // cause array out of bounds error and handle improperly
    public static void main(String[] args) {
        // declares and initializes and integer array which is unusual
        // the int array is initialized with numbers that match index values
        int[] values = new int[](0,1,2,3,4);
        // creating the index but relies on user intput at arg[0] to intialize the index
        int index = Integer.parseInt(args[0]); 
        int a = -1;
        try {
                // if the user's input is not 0-4, no problem
                // any other value creates an error
                a = values[index];
        }
        catch (ArrayIndexOutOfBoundsException e) {
                // no actions here... so doesn't fix the problem
        }
        System.out.println("Your value is"+values[a]+".");
    }
}
