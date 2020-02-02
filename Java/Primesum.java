import java.util.Scanner;
class Primesum
{
    public static void main(String[] args)
    {
    Scanner s = new Scanner(System.in);
    int n = s.nextInt();
    s.close();
    int count;
    int sumofprime=0;
    while(n!=0)
    {
        count=0;
        int x=n%10;
        n/=10;
        for(int i=1;i<=x;i++)
        {
        if(x%i==0)
        {
            count++;
        }
        }
        if(count==2)
        {
            sumofprime+=x;
        }
    }
    System.out.println(sumofprime);
    }
}

