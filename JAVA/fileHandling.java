// import java.io.File;
import java.io.*;
public class fileHandling{
    public static void main(String[] args){
        String[] temp = new String[10];
        int i = 0;
       try {

        File a = new File("anu.txt");
        a.createNewFile();

        if(!a.exists()){
            throw new  Exception("file not  found");
        }
        else{
            System.out.println("file "+ a + " created");
        }

        BufferedWriter b  = new BufferedWriter(new FileWriter(a));
        b.write("hellow there i am anurag nidhi testing java file handling ");
        b.newLine();
        b.write("second line ");
        b.close();

        BufferedReader c = new BufferedReader(new FileReader(a));
        String line ;
        while((line = c.readLine())!= null){
            System.out.println(line);
            temp[i] = line;
            i++;
        }
        c.close();
        a.delete();
        if(a.exists()){
            throw new Exception("file not deleted");
        }
        else{System.out.println("file deleted successfully ");}

       } catch (Exception e) {
         System.out.println("!!!!!!!!"+ e + "!!!!!!!!");
       }
       
        for(int j = 0; j<=i-1; j++){
            System.out.println(temp[j]);
        }
    }
}