/*
write a java  program  to print the following pattern for any given positive integer?

for other boundary conditions print -1.

case = 1
input = 4
output =
1
2 1
3 2 1
4 3 2 1

case = 2
input = 3
output =
1
2 1
3 2 1

*/
import java.util.Scanner;
class Consecutivereversepattern
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