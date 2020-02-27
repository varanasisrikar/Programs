import java.util.Scanner;
class Fingerindexapi
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        String st = s.nextLine();
        String str = s.nextLine();
        s.close();
        int temp = 0;
        int time = 0;
        if((st.length()>26)&&(str.length()>Math.pow(10,4)))
        {
            System.out.println(-1);
        }
        else
        {
            for(int i=0;i<str.length();i++)
            {
                time+=Math.abs((temp-st.indexOf(str.charAt(i))));
                temp=st.indexOf(str.charAt(i));
            }
            System.out.println(time);
        }
    }
}