import java.util.concurrent.*;

class Firstcft implements Callable<String> {
    public String call() throws Exception {
        for (int i = 0; i < 100; i++) {

            System.out.println("KMIT");
        }
        return "KMIT done";
    }
}

class Secondcft implements Callable<String> {
    public String call() throws Exception {
        for (int i = 0; i < 100; i++) {

            System.out.println("NGIT");
        }
        return "NGIT done";
    }
}

class Threadsft {
    public static void main(String[] args) throws Exception {
        Callable<String> f = new Firstcft();
        Callable<String> s = new Secondcft();
        FutureTask<String> ft1 = new FutureTask<String>(f);
        FutureTask<String> ft2 = new FutureTask<String>(s);
        Thread t1 = new Thread(ft1);
        Thread t2 = new Thread(ft2);
        t1.start();
        t2.start();
        for (int i = 0; i < 100; i++) {
            System.out.println("Main");
            if (i % 10 == 0) {
                if (ft1.isDone()) {
                    System.out.println(ft1.get());
                }
            }
            if (i % 10 == 0) {
                if (ft2.isDone()) {
                    System.out.println(ft2.get());
                }
            }
        }
    }
}