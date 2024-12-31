package output;

public class Mythreads extends Thread {
    public void run()
    { 
        System.out.println("Thread is running");
    }

    public static void main(String[] args)
    {
        Mythreads thread = new Mythreads();
        thread.start();
    }
}

