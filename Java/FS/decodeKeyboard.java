package FS;

import java.util.Scanner;

class decodeKeyboard {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String st = s.next();
        String str = s.next();
        s.close();
        StringBuilder number = new StringBuilder();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < str.length(); i++) {
            number.append(str.charAt(i) + str.charAt(i + 1));
            sb.append(st.charAt(Integer.parseInt(number.toString())));
            number.delete(0, number.length());
        }
        System.out.println(sb.toString());
    }
}