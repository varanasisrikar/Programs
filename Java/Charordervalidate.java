import java.util.*;

class Charordervalid {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int count = 0;
        int k = 0;
        char[] alph = "abcdefghijklmnopqrstuvwxyz".toCharArray();
        char[][] board = new char[n][n];
        for (int i = 0; i < n; i++) {
            board[i] = s.nextLine().toCharArray();
            Arrays.sort(board[i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (alph[k] == board[i][j]) {
                    count++;
                }
                k++;
            }
        }
        if (n * n == count) {
            System.out.println(true);
        } else {
            System.out.println(false);
        }
    }
}