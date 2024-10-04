import java.util.Scanner;
public class anu {
    public static void main(String[] args) {
        Scanner ask = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String str = ask.nextLine();
        permute(str,0,str.length()-1);
        ask.close();
    }
    public static void permute(String str,int l,int r){
        if(l==r){
            System.out.print(str);
            System.out.print(" ");
        }
        else{
            for(int i=l;i<=r;i++){
                str = swap(str,l,i);
                permute(str,l+1,r);
                str = swap(str,l,i);
            }
        }
    }
    public static String swap(String str,int i,int j){
        char[] arr = str.toCharArray();
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        return String.valueOf(arr);
    }
}