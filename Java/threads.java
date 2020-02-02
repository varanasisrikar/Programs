class First implements Runnable
{
    public void run()
    {
        for(int i=0;i<1000;i++)
        {
            System.out.println("Runnable 1");
        }
    }
}
class Second implements Runnable
{
    public void run()
    {
        for(int i=0;i<100;i++)
        {
            System.out.println("Runnable 2");
        }
    }
}
class Threads
{
    public static void main(String[] args) throws InterruptedException
    {
        First f = new First();
        Second s = new Second();
        Thread t1 = new Thread(f);
        Thread t2 = new Thread(s);
        t1.start();
        t2.start();
        t1.join();
        t2.join();
        for(int i=0;i<1000;i++)
        {
            System.out.println("Main");
        }
    }
}