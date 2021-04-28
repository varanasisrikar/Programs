import java.util.Scanner;

class numsumStr {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    String st = s.nextLine();
    s.close();
    StringBuilder sb = new StringBuilder();
    int sum = 0;
    for (int i = 0; i < st.length(); i++) {
      if (Character.isDigit(st.charAt(i))) {
        sb.append(st.charAt(i));
      } else if (sb.length() != 0) {
        sum += Integer.parseInt(sb.toString());
        sb.delete(0, sb.length());
      }
    }
    System.out.println(sum + Integer.parseInt(sb.toString()));
  }
}