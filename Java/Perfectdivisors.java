import java.util.Scanner;
class Perfectdivisors
{
    public static void main(final String[] args)
    {
        final Scanner s = new Scanner(System.in);
        final int n = s.nextInt();
        int count = 0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0&&Math.sqrt(i)-Math.floor(Math.sqrt(i))==0)
            {
                count++;
            }
        }
        System.out.println(count);
        s.close();
    }
}