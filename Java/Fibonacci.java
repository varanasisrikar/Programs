import java.util.Scanner; 
public class Fibonacci { 
    
    public static void main(String[] args) { 
	 Scanner sc = new Scanner(System.in);
   int n=sc.nextInt(); 
   sc.close();
        System.out.println(fib(n)); 
    } 
 static int fib(int n) {
     int a=0;
int b=1;
int c=0;
int i=2;
if(n==0)
{
return a;
}
if(n==1)
{
return b;
}
else
{
while(i<=n)
{
  c=a+b;
  a=b;
  b=c;
  i++;
}
return c;
}
 }
 }
