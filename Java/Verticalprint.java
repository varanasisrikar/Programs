import java.util.*;

class Verticalprint {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String sentence = s.nextLine();
        String[] word = sentence.split(" ");
        int maxlength = -10;
        for (int i = 0; i < word.length; i++) {
            if (word[i].length() > maxlength) {
                maxlength = word[i].length();
            }
        }
        for (int i = 0; i < word.length; i++) {
            if (word[i].length() < maxlength) {
                int diff = maxlength - word[i].length();
                for (int j = 0; j < diff; j++) {
                    word[i] += " ";
                }
            }
        }
        for (int i = 0; i < maxlength; i++) {
            String vp = "";
            for (int j = 0; j < word.length; j++) {
                vp += String.valueOf(word[j].charAt(i));
            }
            System.out.print(Verticalprint.stripTrailing(vp) + ",");
        }
    }

    public static String stripTrailing(String st) {
        int len = st.length();
        while (st.charAt(len - 1) <= ' ' && 0 < len) {
            len--;
        }
        return st.substring(0, len);
    }
}