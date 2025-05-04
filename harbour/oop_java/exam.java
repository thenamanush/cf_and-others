import java.io.*;
class exam{
    public static void main(String[] args) {
        try{
            int [] arr = new int[4];
            arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4;


            int x = 10 / 1;


            FileInputStream f = new FileInputStream("nofile.txt");

            System.out.println("all operations done");
        }
        catch(FileNotFoundException e){
            System.out.println("eta nei");
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println(e);
        }
        catch(ArithmeticException e){
            e.getMessage();
        }
        System.out.println("the last ones standing are the victors");
    }
}
