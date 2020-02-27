import java.util.Scanner;
class Countcommonprimefactors
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int o = s.nextInt();
        s.close();
        int m = Math.max(n,o);
        int count = 0;
        for(int i=1;i<m;i++)
        {
            int step = 0;
            if(n%i==0&&o%i==0)
            {
                for(int j=1;j<m;j++)
                {
                    if(i%j==0)
                    {
                        step++;
                    }
                }
                if(step==2)
                {
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}
	
