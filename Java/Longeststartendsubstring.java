class Longeststartendsubstring {
    public static void main(String[] args) {
        String s = "playersplay";
        System.out.println("The given string is: " + s);
        int start = 0;
        int end = 1;
        while (end <= s.length()) {
            if (s.endsWith(s.substring(start, end))) {
                System.out.println("The longest substring in the string is: " + s.substring(start, end));
                break;
            } else {
                end++;
            }
        }
    }
}