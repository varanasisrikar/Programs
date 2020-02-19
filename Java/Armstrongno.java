import java.util.Scanner;
import java.lang.Math;
class Armstrongno
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        s.close();
        int temp=n;
        int sum=0;
        while(n>0)
        {
            int rem = n%10;
            n = n/10;
            sum+=Math.pow(rem,3);
        }
        if(sum==temp)
        {
            System.out.println("it is an Armstrong number.");
        }
        else
        {
            System.out.println("it is not an Armstrong number.");
        }
    }
}