import java.util.*;

public class anu {
    int n = 0;
    static void input(){
        System.out.println("Enter the size of the array: ");
        Scanner scanner = new Scanner(System.in);
        
        try {
            n = scanner.nextInt();
            if (n <= 0) {
                System.out.println("Please enter a positive integer for the array size.");
                input();
            }
        } catch (InputMismatchException e) {
            System.out.println("Non-int type entered. Please enter an integer value.");
            input();;
        }
    }
    int arr[] = new int[n];
    static void array(){
        for (int i = 0; i < n; i++) {
            System.out.println("Enter Element " + (i + 1) + ": ");
            try {
                arr[i] = scanner.nextInt();
            } catch (InputMismatchException e) {
                System.out.println("Non-int type entered. Please enter an int value.");
                scanner.nextInt(); 
                i--; 
            }
        }
    }
    static void indexprompt(){
        try {
            System.out.println("Enter an index (0 to " + (n - 1) + "): ");
            int index = scanner.nextInt();
            System.out.println("Array value at index " + index + ": " + arr[index]);
        } catch (InputMismatchException e) {
            System.out.println("Non-int type entered. Please enter an integer.");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Invalid index. Please enter a number between 0 and " + (n - 1));
        }
    }
    
    public static void main(String[] args) {
       input();
       array();
       indexprompt();
       
}}