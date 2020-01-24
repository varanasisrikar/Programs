import java.util.Scanner;
class repeatednumberpattern
{
    public static void main(final String[] args)
    {
        final Scanner s= new Scanner(System.in);
        final int n=s.nextInt();
        s.close();
        if(n<0)
        {
            System.out.print(-1);
        }
        else
        {
        for (int i=1;i<=n;i++)
        {
            int j=0;
            
            while(j<i)
            {
                System.out.print(i+"\t");
                j=j+1;
            }
            System.out.println("");
        }
        }
    }
}