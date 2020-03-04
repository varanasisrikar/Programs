import java.util.Scanner;
class Encodedstring
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        String st = s.nextLine();
        StringBuilder sb = new StringBuilder("");
        for(int i=0;i<st.length();i++)
        {
            Character c = st.charAt(i);
            if(!Character.isDigit(c))
            {
                sb.append(c);
            }
            else
            {
                int j = (int)c-48;
                int k = i+2;
                int l = st.indexOf(']',i);
                String sub = st.substring(k,l);
                for(int m=1;m<=j;m++)
                {
                    sb.append(sub);
                }
                i=l;
            }
        }
        System.out.println(sb);
        s.close();
    }
}