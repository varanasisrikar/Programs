import java.util.Scanner;
class Consecutivenumberreversepattern
{
    public static void main(String[] args)
    {
    Scanner s = new Scanner(System.in);;
    int n = s.nextInt();
    s.close();
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
           System.out.print(j+" ");
        }
        System.out.println();
    }
    }
}