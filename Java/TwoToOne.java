import java.util.HashSet;
import java.util.Arrays;
public class TwoToOne {
    public static String longest (String s1, String s2) {
        String[] c1=s1.split("");
        String[] c2=s2.split("");
        HashSet<String> st1 = new HashSet<>(Arrays.asList(c1));
        HashSet<String> st2 = new HashSet<>(Arrays.asList(c2));
        if(st1.size()>st2.size())
        {
          return String.join("",st1);
        }
        else
        {
          return String.join("",st2);
        }
    }
    public static void main(String[] args)
    {
        System.out.println(TwoToOne.longest("loopingisfunbutdangerous", "lessdangerousthancoding"));
    }
}
