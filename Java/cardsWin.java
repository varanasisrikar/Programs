import java.util.Scanner;

class cardWin {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        s.close();
        int shsc = 0, andsc = 0;
        int n = s.nextInt();
        int[] scards = new int[n];
        for (int i = 0; i < n; i++) {
            scards[i] = s.nextInt();
        }
        int m = s.nextInt();
        int[] acards = new int[m];
        for (int i = 0; i < m; i++) {
            acards[i] = s.nextInt();
        }
        String yn = s.nextLine();
        if (yn.equals("YES")) {
            for (int i = 0; i < n; i = i + 2) {
                shsc += acards[i] - scards[i];
                andsc += scards[i] - acards[i];
            }
        } else if (yn.equals("NO")) {
            for (int i = 1; i < m; i = i + 2) {
                shsc += acards[i] - scards[i];
                andsc += andsc + scards[i] - acards[i];
            }
        }
        if (shsc > andsc) {
            System.out.println("Shyam");
        } else if (andsc == shsc) {
            System.out.println("TIE");
        } else {
            System.out.println("Andy");
        }
    }
}