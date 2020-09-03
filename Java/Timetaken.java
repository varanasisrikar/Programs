import java.util.Scanner;

class Timetaken {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String keyboard = s.nextLine();
        String input = s.nextLine();
        s.close();
        int timetaken = 0;
        int previouscharindex = 0;
        int presentcharindex = 0;
        for (int i = 0; i < input.length(); i++) {
            presentcharindex = keyboard.indexOf(input.charAt(i));
            timetaken += Math.abs(presentcharindex - previouscharindex);
            previouscharindex = presentcharindex;
        }
        System.out.println(timetaken);
    }
}