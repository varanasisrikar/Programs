import java.util.Scanner;

class Alternatingsymbolpattern {
    public static void main(final String[] args) {
        final Scanner s = new Scanner(System.in);
        final int n = s.nextInt();
        s.close();
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < i; j++) {
                    if (j % 2 != 0) {
                        System.out.print("#");
                    } else if (j % 2 == 0) {
                        System.out.print("*");
                    }
                }
                System.out.print("\n");
            } else if (i % 2 != 0) {
                for (int j = 0; j < i; j++) {
                    if (j % 2 != 0) {
                        System.out.print("*");
                    } else if (j % 2 == 0) {
                        System.out.print("#");
                    }
                }
                System.out.print("\n");
            }
        }
    }
}