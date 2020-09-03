import java.util.*;

public class Stringderive {
    public static void checkI(String s, String t) {

        HashMap<Character, Character> h = new HashMap<Character, Character>();
        if (s.length() != t.length()) {
            System.out.println("False");
        }
        for (int i = 0; i < s.length(); i++) {
            if (h.containsKey(s.charAt(i))) {
                if (t.charAt(i) != h.get(s.charAt(i))) {
                    System.out.println("False");
                    return;
                }
            } else {
                if (h.containsValue(t.charAt(i))) {
                    System.out.println("False");
                    return;
                }
                h.put(s.charAt(i), t.charAt(i));
            }
        }
        System.out.println("True");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        String str2 = sc.next();
        checkI(str1, str2);
    }

}