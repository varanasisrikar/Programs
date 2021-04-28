import java.util.*;

class shuffleString {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    String st = s.nextLine();
    int[] changes = new int[st.length()];
    for (int i = 0; i < st.length(); i++) {
      changes[i] = s.nextInt();
    }
    String[] str = st.split("");
    for (int i = 0; i < str.length; i++) {
      String temp = str[i];
      str[i] = str[changes[i]];
      str[changes[i]] = temp;
    }
    for (int i = 0; i < str.length; i++)
      System.out.println(str[i]);
  }
}