import java.util.*;

class Palindromestring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();
        String[] ar = s.split(" ");
        for (int i = 0; i < ar.length; i++) {
            StringBuilder sb = new StringBuilder();
            sb.append(ar[i]);
            sb.reverse();
            String st = sb.toString();
            if (ar[i].equals(st)) {
                System.out.println(ar[i]);
            }
        }
    }
}