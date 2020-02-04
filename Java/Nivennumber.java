import java.util.Scanner;
class Nivennumber
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int sum=0;
        int n = s.nextInt();
        s.close();
        int temp=n;
        while(n!=0)
        {
            int x=n%10;
            n/=10;
            sum+=x;
        }
        if(temp%sum==0)
        {
            System.out.println(1);
        }
        else
        {
            System.out.println(0);
        }
    }
}