import java.util.*;

class sweetTrack {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    String st = s.nextLine();
    s.close();
    String alphabet = "abcedefghijklmnopqrstuvwxyz";
    ArrayList<Character> charset = new ArrayList<Character>();
    int j = 0;
    for (int i = 0; i < alphabet.length(); i++) {
      charset.add(st.charAt(i));
    }
    int[] count = new int[26];
    Arrays.fill(count, 0);
    for (int i = 0; i < st.length(); i++) {
      count[charset.indexOf(st.charAt(i))]++;
    }
    Arrays.sort(count);
    while (count[j] == 0) {
      j++;
    }
    int minval = count[j];
    int maxval = count[25];
    if (minval == maxval) {
      System.out.println("true");
    } else if (maxval - minval == 1 && maxval > count[24] ||
               minval == 1 && count[j + 1] == maxval) {
      System.out.println("true");
    } else {
      System.out.println("false");
    }
  }
}