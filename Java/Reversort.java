import java.util.Scanner;
class Reversort {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int T = s.nextInt();
    int[] cost = new int[T];
    int N = s.nextInt();
    for (int i = 0; i < T; i++) {
      int[] L = new int[N];
      for (int j = 0; j < N; j++) {
        L[j] = s.nextInt();
      }
      cost[i] = Revsort(L);
      L = null;
    }
    for (int i = 0; i < cost.length; i++) {
      System.out.println("Case #" + (i + 1) + ": " + cost[i]);
    }
  }

  static int Search(int[] l, int i) {
    int pos = 0;
    for (int j = 0; j < l.length; j++) {
      if (l[j] == i) {
        pos = j + 1;
      }
    }
    return pos;
  }

  static boolean issorted(int[] l) {
    for (int i = 0; i < l.length - 1; i++)
      if (l[i] > l[i + 1]) {
        return false;
      }
    return true;
  }

  static int[] reverse(int[] l, int m, int p) {
    for (int i = p; i >= m; i--) {
      for (int j = m; j <= p; j++) {
        int temp = l[i];
        l[i] = l[j];
        l[j] = temp;
      }
    }
    return l;
  }

  static int Revsort(int[] l) {
    int cost = 0;
    for (int i = 1; i <= l.length - 1; i++) {
      int j = Search(l, i);
      reverse(l, i, j - 1)
      cost += j - i + 1;
    }
    return cost;
  }
}