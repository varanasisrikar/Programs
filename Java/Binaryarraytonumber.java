import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class Binaryarraytonumber {

    public static int Convertbinaryarraytoint(List<Integer> binary) {
        int num = 0;
        for (int i = binary.size() - 1, j = 0; i >= 0; i--, j++) {
            num += Math.pow(2, j) * binary.get(i);
        }
        return num;
    }

    public static void main(String[] args) {
        System.out.println(Binaryarraytonumber.Convertbinaryarraytoint(new ArrayList<>(Arrays.asList(1, 1, 1, 1))));
    }
}