import java.lang.Math;
import java.util.Scanner;
class Square {    
    public boolean isSquare(final int n) {        
        final double x=Math.sqrt(n);
        if(x==(int)x)
        {
        return true;
        }
        else
        {
        return false;
        }
    }
}
class Checksquare
{
    public static void main(final String[] args)
    {
        final Square s = new Square();
        final Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number for checking:");
        final int no = sc.nextInt();
        sc.close();
        final boolean res=s.isSquare(no);
        if(res==true)
        {
            System.out.println("Number is a Perfect Square");
        }
         if(res==false)
        {
            System.out.println("Number is not a Perfect Square");
        }
    }
}