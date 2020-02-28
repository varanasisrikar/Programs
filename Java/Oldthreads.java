class first implements Runnable{
    public void run(){
        for(int i=0;i<100;i++){
        System.out.println("KMIT");
        }
    }
}
class second implements Runnable{
    public void run(){
        for(int i=0;i<100;i++){
        System.out.println("NGIT");
    }
    }

}
class Oldthreads{
    public static void main(String[] args) throws InterruptedException
    {
        first f=new first();
        second s=new second();
        Thread t1=new Thread(f);
        Thread t2=new Thread(s);
        t1.start();
        t2.start();
                
        t1.join();
        t2.join();
         
        for(int i=0;i<100;i++){
            System.out.println("Main");
        }
    }
}