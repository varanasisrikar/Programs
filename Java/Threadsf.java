import java.util.concurrent.Callable;
import java.util.concurrent.Future;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

class Firstcf implements Callable<String> {
    public String call() throws Exception {
        for (int i = 0; i < 100; i++) {

            System.out.println("KMIT");
        }
        return "KMIT done";
    }
}

class Secondcf implements Callable<String> {
    public String call() throws Exception {
        for (int i = 0; i < 100; i++) {

            System.out.println("NGIT");
        }
        return "NGIT done";
    }
}

class Threadsf {
    public static void main(String[] args) throws Exception {
        Callable<String> f = new Firstcf();
        Callable<String> s = new Secondcf();
        ExecutorService executor = Executors.newFixedThreadPool(10);
        Future<String> f1 = executor.submit(f);
        Future<String> f2 = executor.submit(s);
        
    }
}