import java.util.Random;
import java.util.concurrent.Callable;
import java.util.concurrent.Future;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
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

class threads3{
    public static void main(String[] args) throws Exception
    {
        Callable<String> f=new First();
        Callable<String> s=new Second();
       ExecutorService executor =Executors.newFixedThreadPool(10);
       Future f1=executor.submit(f);
       Future f2=executor.submit(s);
       
    }
}