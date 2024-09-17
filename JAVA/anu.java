import java.util.Scanner;
public class anu{

    static void ctof(int celcius){ // celcius to faherenheit
        System.out.println("Celcius = "+celcius);
        double fahrenheit = (celcius * 9/5) + 32;
        System.out.println(celcius+" in faherenheit is = "+fahrenheit);    
    }
    static void calculations(int a,int b){// sum,sub,multiple,div,remainder
        System.out.print("sum of "+a+" and "+b+" = ");
        System.out.println(a+b);
        System.out.print("sub of "+a+" and "+b+" = ");
        System.out.println(a-b);
        System.out.print("multiple of "+a+" and "+b+" = ");
        System.out.println(a*b);
        System.out.print("div of "+a+" and "+b+" = ");
        System.out.println(a/b);
        System.out.print("remainder of "+a+" and "+b+" = ");
        System.out.println(a%b);
    }
    static void oddcheck(int a){
    // WAP that inputs a number (N) and adds 5 to N if N is odd then print it. 
        int b = a+5;
        if(a%2==0){
            System.out.println(b+" is even");
        }
        else{
            System.out.println(a+" is odd");
        }
    }
    static void maxnum(int a,int b){// max amoung 2 no.
        if(a>b){
            System.out.println(a+" is greater than "+b);
        }
        else{
            System.out.println(b+" is greater than "+a);
        }
    }
    static void oddcheckadd(int a){
        //WAP that inputs a number (N) and adds 7 to N if N is odd, else add 4.     
        if(a%2==0){
            System.out.println(a+4);
        }
        else{
            System.out.println(a+7);
        }
    }
    static void guessnumber(){
        Scanner input = new Scanner(System.in);
        // random number
        int a = (int)(Math.random()*10+1);
        System.out.print("Guess the number between 1 to 100 = ");
        int num = input.nextInt();
        if(num==a){
            System.out.println("You guessed it right");
        }
        else{
            System.out.println("You guessed it wrong");
            System.out.println("correct number is "+a);
        }
        input.close();
    }
    static void leapyear(int year){
    //WAP that determines whether a given year is a leap year or not. A year
    // is a leap year if it is divisible by 4 but not divisible by 100, or if it is
    // divisible by 400.
        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    System.out.println(year+" is a leap year");
                }
                else{
                    System.out.println(year+" is not a leap year");
                }
            }
            else{
                System.out.println(year+" is a leap year");
            }
        }
        else{
            System.out.println(year+" is not a leap year");
        }
    }
    static void discount(){
       /* WAP that calculates the discount percentage for a customer’s purchase
        based on the purchase amount and customer loyalty. If the purchase
        amount is greater than 100 and the customer has been loyal (member for
        more than a year), they get a 10% discount; otherwise, they get a 5*/
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the purchase amount = ");
        int amount = input.nextInt();
        System.out.print("Enter the year of loyalty = ");
        int year = input.nextInt();
        if(amount>100 && year>1){
            System.out.println("You get 10% discount");
            int dis = amount-(amount*10/100);
            System.out.println(dis);
        }
        else{
            System.out.println("You get 5% discount");
            int dis = amount-(amount*5/100);
            System.out.println(dis);
        }
        input.close();
    }
    public static void main(String[] args){
        // ctof(45);
        // calculations(50,46 );
        // oddcheck(3);
        // maxnum(5, 6);
        // oddcheckadd(5);
        // guessnumber();
        // leapyear(2001);
        //  discount();

    }
    
}
