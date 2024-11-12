import java.util.*;

class Payment_Management{
    public int balace = 0;
    public int [] transactions_history_cash = new int[1000];
    public int cash=0;
    public int [] transactions_history_card = new int[1000];
    public int card=0;
    public int [] transactions_history_cheque = new int[1000];
    public int cheque=0;
    public int [] transactions_history_online = new int[1000];
    public int online=0;

    public void addMoney(int money){
        balace += money;
    }
    
    public void tranctions(int money){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the mode of payment: ");
        System.out.println("1. Cash");
        System.out.println("2. Card");
        System.out.println("3. Cheque");
        System.out.println("4. Online");
        int mode = input.nextInt();
        // input.close();
       if(mode > balace){System.out.println("Insufficient balance ");}
       else{
        if(mode==1){
            balace= balace - money;
            transactions_history_cash[cash] = money;
            cash++;
        }
        else if(mode==2){
            balace= balace - money;
            transactions_history_cash[card] = money;
            card++;
        }
        else if(mode==3){
            balace= balace - money;
            transactions_history_cash[cheque] = money;
            cheque++;
        }
        else if(mode==4){
            balace= balace - money;
            transactions_history_cash[online] = money;
            online++;
        }
       }

    }
    public void tranctions_history(){
        Scanner input1 = new Scanner(System.in);
        System.out.println("Enter the mode of payment: ");
        System.out.println("1. Cash");
        System.out.println("2. Card");
        System.out.println("3. Cheque");
        System.out.println("4. Online");
        int mode1 = input1.nextInt();
        // input1.close();
        if(mode1==1){
            for(int i=0; i<=cash; i++){
                System.out.println("Cash: "+transactions_history_cash[i]);
            }
        }
        else if(mode1==2){
            for(int i=0; i<=card; i++){
                System.out.println("Card: "+transactions_history_card[i]);
            }
        }
        else if(mode1==3){
            for(int i=0; i<=cheque; i++){
                System.out.println("Cheque: "+transactions_history_cheque[i]);
            }
        }
        else if(mode1==4){
            for(int i=0; i<=online; i++){
                System.out.println("Online: "+transactions_history_online[i]);
            }
        }
    }
    void balace(){
        System.out.println("Your Balance = "+balace);
    }
}

    



public class anu {
    public static void main(String[] args) {
        Payment_Management obj = new Payment_Management();
        obj.addMoney(1000);
        obj.tranctions(500);
        obj.tranctions(200);
        obj.tranctions(300);
        obj.tranctions(100);
        obj.tranctions_history();
        obj.balace();
    }
             
}