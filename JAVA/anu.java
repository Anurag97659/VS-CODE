import java.io.File;
import java.io.IOException;
import java.nio.Buffer;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.util.Scanner;
public class  anu{
    public static void main(String[] args){
    // creating files and checking if they exist========
     File file = new File ("anurag.txt");
     File fil = new File ("anura.txt");
     try {
        boolean created = file.createNewFile();
         fil.createNewFile();
        System.out.println(file.exists());
        System.out.println(fil.exists());
     } catch (IOException e) {
        System.out.println("Exception Occurred::::"+ e);
     }
   


     // checking files list in the same directory
   try {
    File d = new File(".");
     String[] fileList = d.list();
     System.out.println("Printing the file list");
     for(String name: fileList){
         System.out.println(name);
     }
   } catch (NullPointerException e) {
         System.out.println("Exception Occurred::::"+ e);
   }
   

   // reading the file content
   try {
    File f = new File("anurag.txt");
    BufferedReader br = new BufferedReader(new FileReader(f));
    String line;
    while((line = br.readLine()) != null){
        System.out.println(line);
    }
    br.close();
   } catch (Exception e) {
    System.out.println("Exception Occurred::::"+ e);
   }
   //   or 
   try {
    File a = new File("anura.txt");
    Scanner sc = new Scanner(a);
    while(sc.hasNextLine()){
        System.out.println(sc.nextLine());
    }
   } catch (Exception e) {
    System.out.println("Exception Occurred::::"+ e);
   }



    // writing to a file
    try {
        File n = new File("anurag.txt");
        BufferedWriter bw = new BufferedWriter(new FileWriter(n));
        bw.newLine();
        bw.write("Hello Anurag");
        bw.close();
    } catch (Exception e) {
          System.out.println("Exception Occurred::::"+ e);
    }
    
    try {
        File a = new File("anurag.txt");
        Scanner sc = new Scanner(a);
        while(sc.hasNextLine()){
            System.out.println(sc.nextLine());
        }
       } catch (Exception e) {
        System.out.println("Exception Occurred::::"+ e);
       }
        file.delete();
        fil.delete();
}
}