import java.util.*;

class Decodedstring {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String encodedstr = s.nextLine();
        int[] decpos = new int[encodedstr.length()];
        for (int i = 0; i < decpos.length; i++) {
            decpos[i] = s.nextInt();
        }
        s.close();
        char[] encodedarr = encodedstr.toCharArray();
        char[] decodedarr = new char[encodedarr.length];
        for (int i = 0; i < encodedarr.length; i++) {
            decodedarr[decpos[i]] = encodedarr[i];
        }
        System.out.println(String.valueOf(decodedarr));
    }
}