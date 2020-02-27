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
	    char[] sta = s1.toCharArray();
		char[] star = s2.toCharArray();
		Arrays.sort(sta);
		Arrays.sort(star);
		if(sta.length!=star.length)
		{
		    return false;
		}
		else
		{
		    for(int i=0;i<sta.length;i++)
		    {
		        if(sta[i]==star[i])
		        {
		            return true;
		        }
		    }
		    return false;
        }
    }
}