import java.util.Scanner;
class Fingerindexfor
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        String st = s.nextLine();
        String str = s.nextLine();
        s.close();
        int temp = 0;
        int time = 0;
        for(int i=0;i<str.length();i++)
        {
            for(int j=0;j<st.length();j++)
            {
                if(str.charAt(i)==st.charAt(j))
                {
                    time+=Math.abs(j-temp);
                    temp=j;
                }
            }
        }
        System.out.println(time);
    }
}