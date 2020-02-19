import java.util.*;
class Anagram
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the First String : ");
        String st = s.nextLine();
        System.out.print("Enter the Second String : ");
        String str = s.nextLine();
        s.close();
        
        if(AnagramCheck(st,str))
        {
            System.out.println(st+" and "+str+" are Anagrams");
        }
        else
        {
            System.out.println(st+" and "+str+" are NOT Anagrams");
        }
    }
    static boolean AnagramCheck(String s1,String s2)
    {
        char ca[] = s1.toCharArray();
        char car[] = s2.toCharArray();
        int n = ca.length;
        Arrays.sort(ca);
        Arrays.sort(car);
        String st = Arrays.toString(ca);
        String str = Arrays.toString(car);
        for(int i=0;i<n;i++)
        {
            if(st.charAt(i)!=str.charAt(i))
            {
                return false;
            }
        }
        return true;
    }
}