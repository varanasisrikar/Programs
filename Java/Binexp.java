import java.util.*;
class Binexp {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int num = s.nextInt();
    int pow = s.nextInt();
    s.close();
    if (pow > 0) {
      System.out.printf("%.6f", binaryexp(num, pow));
    } else {
      System.out.printf("%.6f", 1 / binaryexp(num, pow));
    }
  }

  static float binaryexp(int n, int p) {
    if (p == 0) {
      return 1;
    } else {
      if (p % 2 == 0) {
        return binaryexp(n, p / 2) * binaryexp(n, p / 2);
      } else {
        return binaryexp(n, p / 2) * binaryexp(n, p / 2) * n;
      }
    }
  }
}