import java.io.*;
class B{
    public static void main(String[] args) {
        try{
            int x = 10 / 0; // arithmatic exception
            String name = "Numan";
            System.out.println(name.charAt(10)); // string index exception
            String z = null;
            System.out.println(z.length()); // different exception
        }
        catch(ArithmeticException e){
            System.out.println("line 1");
        }
        catch(StringIndexOutOfBoundsException e){
            System.out.println("line 2");
        }
        catch(Exception e){
            System.out.println("line 3");
        }
        finally{
            System.out.println("I may be small, but i can jump!");
        }
    }
}
