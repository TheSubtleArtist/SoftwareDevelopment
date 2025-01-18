public class Caesar {
    public static void main (String[] args) {
        // caesar shifts do not allow for spaces
        // convert the plaintext in to bytes and store in the plaintext byte array
        byte[] plaintext = "Thisisasecretmessages".getBytes();
        byte[] ciphertext = CaesarEncrypt(plaintext,3);
        System.out.println(new String(ciphertext));
    }    

    public static byte[] CaesarEncrypt(byte[] plaintext, int step) {
        // create the new byte array taht is the same size as the plaintext
        byte[] ciphertext = new byte[plaintext.length];

        for (int i = 0; i < plaintext.length; i++) {
            // read the byte at the plaintext location, add the step value, and store the result in the ciphertext array
            ciphertext [i] = (byte) (plaintext [i]+step);
            // capital letters are 90 or less, anything higher is lowercase
            // check to make sure only using capital letters
            // if the letter is greater than 90, subtract 26 to make it a capital letter
            if (plaintext[i] < 91) {
                if (ciphertext[i] > 90) {
                    ciphertext[i] -= 26;
                }
            }
            else {
                if (ciphertext[i] > 122)
                    ciphertext[i] -= 26;
            }
        }
        return ciphertext;
    }
}
