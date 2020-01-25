import java.util.Scanner;
class consecutivenumberpattern
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
            int l=0;
            for(int i=1;i<=n;i++)
            {
                int j;
                if (i==1) 
                   j=i;
                else j=l;
                
                for (int k=0;k<i;k++)
                {
                   
                   System.out.print(j+"\t");
                   
                   j=j+1;
                    
                }
                l=j;
                System.out.println("");
            }
        }
    }
}