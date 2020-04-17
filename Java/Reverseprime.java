import java.util.Scanner;
class Reverseprime {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int count = 0;
        int reverse = 0;
        while (n != 0) {
            int x = n % 10;
            reverse = reverse * 10 + x;
            n /= 10;
        }
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            System.out.println(1);
        } else {
            System.out.println(-1);
        }
    }
}