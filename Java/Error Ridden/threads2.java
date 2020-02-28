import java.util.Random;
import java.util.concurrent.Callable;
import java.util.concurrent.FutureTask;

class First implements Callable<String>{
    public String call() throws Exception
    {
        for(int i=0;i<100;i++){

         System.out.println("KMIT");
        }
        return "KMIT done";
    }
}

class Second implements Callable<String>{
    public String call() throws Exception
    {
        for(int i=0;i<100;i++){

         System.out.println("NGIT");
        }
        return "NGIT done";
    }
}

class threads2{
    public static void main(String[] args) throws Exception
    {
        Callable f=new First();
        Callable s=new Second();
        FutureTask ft1=new FutureTask(f);
        FutureTask ft2=new FutureTask(s);
        Thread t1=new Thread(ft1);
        Thread t2=new Thread(ft2);
        t1.start();
        t2.start();
        for(int i=0;i<100;i++)
        {
            System.out.println("Main");
            if(i%10==0){
                if(ft1.isDone()){
                    System.out.println(ft1.get());
                }
            }
            if(i%10==0)
            {
                if(ft2.isDone())
                {
                    System.out.println(ft2.get());
                }
            }
        }
    }
}