import java.util.HashMap;

public class Encodestring {

    static final String ALP = "ABCDEFGHIJKLMNOPQRSTUVWXYZ 123456789";

    static String encode(String s) {
        HashMap<String, String> map = new HashMap<String, String>();
        String[] arr = ALP.split("");
        String[] sarr = s.split("");
        Integer i1 = 0;
        Integer i2 = 0;
        for (int i = 0; i < 36; i++) {
            String key = i1.toString() + i2.toString();
            if (i1 <= 5 && i2 == 5) {
                i1++;
                i2 = 0;
            } else if (i1 <= 5 && i2 <= 5) {
                i2++;
            }
            map.put(arr[i], key);
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < sarr.length; i++) {
            sb.append(map.get(sarr[i].toUpperCase()));
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        System.out.println(Encodestring.encode("HeLlO WoRlD"));
    }
}
