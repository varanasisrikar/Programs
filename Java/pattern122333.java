import java.util.Scanner;
class pattern122333
{
    public static void main(final String[] args)
    {
        final Scanner s= new Scanner(System.in);
        final int n=s.nextInt();
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