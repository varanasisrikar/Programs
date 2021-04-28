import java.util.*;

class alphPattern {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int n = s.nextInt();
    String alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0 || i == n - 1) {
        for (int j = 0; j < n; j++) {
          System.out.print("*"
                           + " ");
        }
      } else {
        for (int l = 0; l < n; l++) {
          if (l == 0 || l == n - 1) {
            System.out.print("*"
                             + " ");
          } else {
            if (k < 26) {
              System.out.print(alp.charAt(k) + " ");
              k++;
            } else {
              k = 0;
              System.out.print(alp.charAt(k) + " ");
              k++;
            }
          }
        }
      }
      System.out.println("");
    }
  }
}