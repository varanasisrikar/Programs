import java.util.Scanner;
class Wordoccurancecount
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter string and substring");
        String st = s.nextLine();
        String str = s.nextLine();
        s.close();
        int count = 0;
        String[] sta = st.split(" ");
        for(int i=0;i<sta.length;i++)
        {
            if(str.equals(sta[i]))
            {
                count++;
            }
        }
        System.out.println(count);
    }
    
}