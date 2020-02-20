import java.util.Scanner; //This package for reading input
public class Fibonacci
 { 
    public static void main(String args[]) { 
	 Scanner sc = new Scanner(System.in);
	 int n=sc.nextInt(); 
        System.out.println(fib(n)); 
        sc.close();
    } 
 static int fib(int n) {
int a=0;
int b=1;
int c=0;
if(n==1)
{
return a;
}
if(n==2)
{
return b;
}
else
{
for(int i=2;i<n;i++)
{
  c=a+b;
  a=b;
  b=c;
}
  return c;
}
}  
}