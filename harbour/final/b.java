//second second print

class A extends Thread{
    public void run(){
        for(int i = 0; i < 5; ++i){
            System.out.println(i + " " + Thread.currentThread(). getName());
            try{
                Thread.sleep(3000);
            }
            catch(InterruptedException e){

            }
        }
    }
    public static void main(String[] args) {
        A ob = new A();
        ob.start();

        for(int i = 0; i <5; ++i ){
            System.out.println(i + " " + Thread.currentThread(). getName());
            try{
                ob.join();
                Thread.sleep(3000);
            }
            catch(Exception e){

            }
        }
    }
}