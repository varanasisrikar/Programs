import java.util.Scanner;
class Primeprint
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int m = s.nextInt();
        for(int i=n+1;i<m;i++)
        {
            int step=0;
            for(int j=1;j<=m;j++)
            {
                if(i%j==0)
                {
                    step++;
                }
            }
            if(step==2)
            {
                System.out.print(i+" ");
            }   
        }
    }
}