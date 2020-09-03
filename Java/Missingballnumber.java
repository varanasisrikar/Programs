import java.util.*;

class Missingballnumber {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        Integer narr[] = new Integer[n];
        for (int i = 0; i < n; i++) {
            narr[i] = s.nextInt();
        }
        s.close();
        Arrays.sort(narr);
        List<Integer> nlist = Arrays.asList(narr);
        for (int i = 0; i < n + 1; i++) {
            if (!nlist.contains(i)) {
                System.out.println(i);
                break;
            }
        }
    }
}