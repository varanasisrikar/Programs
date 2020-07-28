class CCValidate {
    public static boolean validate(String n) {
        int sum = 0;
        int digit = 0;
        String[] ps = n.split("");
        for (int i = ps.length - 2; i >= 0; i--) {
            digit = Integer.parseInt(ps[i]);
            if (i % 2 == ps.length % 2) {
                digit *= 2;
                if (digit > 9) {
                    digit -= 9;
                }
            }
            sum += digit;
        }
        sum += Integer.parseInt(ps[ps.length - 1]);
        if (sum % 10 == 0) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        System.out.println(CCValidate.validate("1230"));
    }
}
