import java.util.*;

class highestslProduct {
  public static int multiplyArr(int[] a) {
    int i = 0;
    int product = 1;
    while (i < a.length) {
      product = product * a[i];
      i++;
    }
    return product;
  }

  public static int[] rangeCopy(int[] ar, int start, int end) {
    int[] subarr = new int[end + 1 - start];
    int i = 0;
    while (i < subarr.length && start < end + 1) {
      subarr[i] = ar[start];
      start++;
      i++;
    }
    return subarr;
  }

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int size = s.nextInt();
    s.close();
    int[] list = new int[size];
    int i = 0;
    int j = 1;
    int l = 0;
    int posprod = (size - 1) * (size) / 2;
    int[] products = new int[posprod];
    for (int k = 0; k < size; k++) {
      list[k] = s.nextInt();
    }
    while (i < size && j < size && l < posprod) {
      if (j == size - 1) {
        products[l] = multiplyArr(rangeCopy(list, i, j));
        i++;
        l++;
        j = i + 1;
      } else {
        products[l] = multiplyArr(rangeCopy(list, i, j));
        l++;
        j++;
      }
    }
    Arrays.sort(products);
    System.out.println(products[products.length - 1]);
  }
}