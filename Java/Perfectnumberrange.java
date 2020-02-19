import java.util.Scanner;
class Perfectnumberrange
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int sum=0;
        System.out.println("Enter Start Number");
        int n = s.nextInt();
        System.out.println("Enter End Number");
        int m = s.nextInt();
        s.close();
        System.out.println("Perfect Numbers between "+n+" and "+m+" are");
        for(int i=n;i<=m;i++)
        {
          sum=0;    
          for(int j=1;j<=i/2;j++)
          {
              if(i%j==0)
              {
                  sum+=j;
              }
          }
          if(sum==i)
          {
              System.out.print(i+"\t");
          }
        }
    }
}