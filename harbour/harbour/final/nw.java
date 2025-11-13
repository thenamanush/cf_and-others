import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

class example {
    public static void main(String[] args) {
        File file = new File("/Users/basharnuman/Downloads/admit (1).png");

        if (file.exists()) {
            System.out.println("yes the File found: " + file.getAbsolutePath());
        } else {
            System.out.println("File not found.");
        }
    }
}