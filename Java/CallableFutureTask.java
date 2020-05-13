import java.util.*;
import java.util.concurrent.*;
class Factorial implements Callable<Integer>
{
    int n;
    Factorial(int nu)
    {
        n=nu;
    }
    public Integer call()
    {
        int fact=1;
        if(n==0)
        {
            return (Integer)fact;
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                fact=fact*i;
            }
            return (Integer)fact;
        }
    }
}
class Area implements Callable<Double>
{
    double r;
    Area(double ra)
    {
        r=ra;
    }
    public Double call()
    {
        double area=0;
        area=Math.PI*Math.pow(r,2);
        return (Double)area;
    }
}
class Circ implements Callable<Double>
{
    double r;
    Circ(double ra)
    {
        r=ra;
    }
    public Double call()
    {
        double circ=0;
        circ=2*Math.PI*r;
        return circ;
    }
}
class CallableFutureTask
{
    public static void main(String[] args)throws Exception
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter radius");
        double rad = s.nextDouble();
        System.out.println("Enter a number");
        int num = s.nextInt();
        s.close();
        Area a = new Area(rad);
        Factorial f = new Factorial(num);
        Circ c = new Circ(rad);
        FutureTask<Double> aft = new FutureTask<Double>(a);
        FutureTask<Integer> fft = new FutureTask<Integer>(f);
        FutureTask<Double> cft = new FutureTask<Double>(c);
        Thread t1 = new Thread(aft);
        Thread t2 = new Thread(fft);
        Thread t3 = new Thread(cft);
        t1.start();
        t2.start();
        t3.start();
        if(aft.isDone())
        {
            System.out.println("Area of Circle  = "+aft.get());
        }
        if(fft.isDone())
        {
            System.out.println("Factorial  = "+fft.get());
        }
        if(cft.isDone())
        {
            System.out.println("Circumference  = "+cft.get());
        }
    }
    
}