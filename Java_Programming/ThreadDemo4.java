class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running...");
    }
}


class ThreadDemo4 
{
    public static void main(String A[])
    {
        System.out.println("Inside Main thread");

        Thread dobj1 = new Thread(new Demo());
        Thread dobj2 = new Thread(new Demo());

        // Explaination of above two lines:
        // Here we are creating two Thread objects and passing the Runnable object (Demo) to their constructor.
        // This way, the run() method of the Demo class will be executed when we call start() on these Thread objects.

        dobj1.start(); 
        dobj2.start(); 
    }
}