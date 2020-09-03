import java.util.*;

class worddisplacement {
    public static void main(String[] arr) {
        Scanner s = new Scanner(System.in);
        String sentence = s.nextLine();
        String word1 = s.next();
        String word2 = s.next();
        String wordarr[] = sentence.split(" ");
        s.close();
        int firstocc = -1;
        int lastocc = -1;
        int distance = 1000;
        String occword = "";
        if (word1.equals(word2)) {
            for (int i = 0; i < wordarr.length; i++) {
                if (wordarr[i].equals(word1)) {
                    if (firstocc == -1) {
                        firstocc = i;
                    } else if (lastocc == -1) {
                        lastocc = i;
                        distance = Math.abs(lastocc - firstocc);
                    } else if (firstocc != -1 && lastocc != -1 && firstocc != lastocc) {
                        firstocc = i;
                        distance = Math.min(distance, Math.abs(lastocc - firstocc));
                    }
                }
            }
            System.out.println(distance);
        } else {
            for (int i = 0; i < wordarr.length; i++) {
                if (wordarr[i].equals(word1) || wordarr[i].equals(word2)) {
                    if (firstocc == -1) {
                        firstocc = i;
                        occword = wordarr[i];
                    } else if (lastocc == -1 && !occword.equals(wordarr[i])) {
                        lastocc = i;
                        distance = Math.abs(lastocc - firstocc);
                    } else if (firstocc != -1 && occword.equals(wordarr[i])) {
                        firstocc = i;
                    } else if (firstocc != -1 && lastocc != -1 && firstocc != lastocc) {
                        firstocc = i;
                        distance = Math.min(distance, Math.abs(lastocc - firstocc));
                    }
                }
            }
            System.out.println(distance);
        }
    }
}