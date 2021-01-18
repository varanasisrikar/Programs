import java.util.*;

public class Bracechecker {

    public static boolean isValid(String braces) {
        Stack<Character> s = new Stack<>();
        boolean a = false;
        for (int i = 0; i < braces.length(); i++) {
            if (braces.charAt(i) == '(' || braces.charAt(i) == '[' || braces.charAt(i) == '{') {
                s.push(braces.charAt(i));
            } else {
                switch (s.pop()) {
                    case '(':
                        if (braces.charAt(i) == ')') {
                            a = true;
                        } else {
                            a = false;
                        }
                    case '[':
                        if (braces.charAt(i) == ']') {
                            a = true;
                        } else {
                            a = false;
                        }
                    case '{':
                        if (braces.charAt(i) == '}') {
                            a = true;
                        } else {
                            a = false;
                        }
                }
            }
        }
        if (!s.empty()) {
            return false;
        } else {
            return a;
        }
    }

    public static void main(String[] args) {
        System.out.println(Bracechecker.isValid("(){}[]"));
    }
}