import java.io.FileWriter;
import java.io.IOException;

public class anu {
    public static void main(String[] args) {
        // File names and their respective contents
        String[][] files = {
            {"file1.txt", "Line1 from File 1\nLine2 from File 1"},
            {"file2.txt", "Line1 from File 2\nLine2 from File 2\nLine3 from File 2"},
            {"file3.txt", "Line1 from File 3\nLine2 from File 3"},
            {"file4.txt", "Line1 from File 4"},
            {"file5.txt", "Line1 from File 5\nLine2 from File 5\nLine3 from File 5\nLine4 from File 5"}
        };

        for (String[] fileData : files) {
            String fileName = fileData[0];
            String content = fileData[1];

            try (FileWriter writer = new FileWriter(fileName)) {
                writer.write(content); // Write content to the file
                System.out.println(fileName + " has been created successfully.");
            } catch (IOException e) {
                System.out.println("An error occurred while creating " + fileName);
                e.printStackTrace();
            }
        }
    }
}