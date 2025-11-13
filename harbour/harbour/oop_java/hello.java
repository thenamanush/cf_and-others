class A extends Thread{
		
		
	public void run(){
		
		for(int i=1;i<=10;i++)	
			try{
				System.out.println(i+" in run "+ Thread.currentThread().getName() );
				Thread.sleep(2000);
			}
			catch(Exception e){

			}

	}	
}
    class B {
	public static void main(String[] args)
	{
		System.out.println("Hello 61 Batch"); // main thread
		A ob = new A(); 	ob.start(); // Thread 0
		
		
		
		
		
	for(int i=1;i<=10;i++)
		{
			try{
				System.out.println(i+" in main method "+ Thread.currentThread().getName());
			Thread.sleep(2000); // 2 sec
		}
		catch(InterruptedException e)
		{
			System.out.println(e);
		}
		}
			
			
	}
}
