import java.util.*;
class nearestHeight {
  public static int heightNearest(int[] har, int hei) {
    int start = 0, end = har.length, mid = 0;
    if (hei <= har[start]) {
      return har[start];
    }
    if (hei >= har[end - 1]) {
      return har[end - 1];
    }
    while (start < end) {
      mid = (start + end) / 2;
      if (har[mid] == hei) {
        return har[mid];
      }
      if (hei < har[mid]) {
        if (mid > 0 && hei > har[mid - 1]) {
          if (hei - har[mid - 1] >= har[mid] - hei) {
            return har[mid];
          } else {
            return har[mid - 1];
          }
        }
        end = mid;
      } else {
        if (mid < end - 1 && hei < har[mid + 1]) {
          if (hei - har[mid] >= har[mid + 1] - hei) {
            return har[mid + 1];
          } else {
            return har[mid];
          }
        }
        start = mid + 1;
      }
    }
    return har[mid];
  }
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int num = s.nextInt();
    int height = s.nextInt();
    int heightarr[] = new int[num];
    for (int i = 0; i < num; i++) {
      heightarr[i] = s.nextInt();
    }
    System.out.println(heightNearest(heightarr, height));
  }
}