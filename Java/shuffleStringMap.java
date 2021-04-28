import java.util.*;

class shuffleStringMap {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    String st = s.next();
    int[] changes = new int[st.length()];
    for (int i = 0; i < st.length(); i++) {
      changes[i] = s.nextInt();
    }
    System.out.println(shufString(st, changes));
  }
  public static String shufString(String s, int[] ch) {
    StringBuilder sb = new StringBuilder();
    HashMap<Integer, Character> shufmap = new HashMap<Integer, Character>();
    for (int i = 0; i < s.length(); i++) {
      shufmap.put(ch[i], s.charAt(i));
    }
    for (int i = 0; i < s.length(); i++) {
      sb.append(shufmap.get(i));
    }
    return sb.toString();
  }
}