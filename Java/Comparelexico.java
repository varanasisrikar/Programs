import java.util.Scanner;

class Comparelexico {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter first String");
        String st = s.nextLine();
        System.out.println("Enter second String");
        String str = s.nextLine();
        s.close();
        int res = st.compareTo(str);
        if (res > 0) {
            System.out.println(st + " is greater than " + str);
        }
        if (res < 0) {
            System.out.println(st + " is less than " + str);
        } else if (res == 0) {
            System.out.println(st + " is equals to " + str);
        }
    }
}
