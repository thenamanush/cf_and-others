class X extends Thread{
	public void run(){
	for(int i=1;i<=10;i++)
		System.out.println(i+" in thread");
	
	}
}
class B{
	public static void main(String[] args)
	{
		X ob= new X();
		//ob.start();
		ob.start();
		for(int i=1;i<=5;i++)
			System.out.println(i+" in main");
		
	
	Runnable r = new Runnable() {
		public void run(){
			System.out.println("running in an anonymous class");
		}
	};

	r.run();
	
	}
}