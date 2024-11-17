public class CaesarBreak {
    // prints all possible plaintext messages
        public static void main (String[] args) {
            // caesar shifts do not allow for spaces
            // convert the plaintext in to bytes and store in the plaintext byte array
            byte[] ciphertext = "Wklvlvdvhfuhwphvvdjh".getBytes();
            byte[] plaintext = new byte [ciphertext.length];
            for (int i=0; i < 26; i++) {
                plaintext = CaesarDecrypt(ciphertext,i);
                System.out.println(new String(plaintext));
            }


            
        }    
    
        public static byte[] CaesarDecrypt(byte[] ciphertext, int step) {
            byte[] plaintext = new byte[ciphertext.length];
            for (int i = 0; i < plaintext.length; i++) {
                plaintext[i] = (byte) (ciphertext [i]-step);
                if (ciphertext[i] < 91) {
                    if (plaintext[i] < 65) {
                        plaintext[i] += 26;
                    }
                }
                else {
                    if (ciphertext[i] > 122)
                        ciphertext[i] -= 26;
                }
            }
            return plaintext;
        }
    }
