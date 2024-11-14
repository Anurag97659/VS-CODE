import java.util.*;
 interface payment{
    void addMoney(int money);
    void tranctions(int money);
    void tranctions_history();  
}

class Payment_Management implements payment{
    public int balace = 0;
    public int [] transactions_history_cash = new int[1000];
    public int cash=0;
    public int [] transactions_history_card = new int[1000];
    public int card=0;
    public int [] transactions_history_cheque = new int[1000];
    public int cheque=0;
    public int [] transactions_history_online = new int[1000];
    public int online=0;
    public int [] transactions_history_credit = new int[1000];
    public int credit=0;
    public int credit_limit=100000;

    public void addMoney(int money){
        balace += money;
    }
    
    public void tranctions(int money){
        Scanner input = new Scanner(System.in);
        System.out.println("1.Cash 2.Card 3.Cheque 4.Online 5.credit");
        System.out.print("Enter the mode of payment: ");
        int mode = input.nextInt();
        // input.close();
       if(money > balace){System.out.println("Insufficient balance ");}
       else{
        if(mode==1){
            balace= balace - money;
            transactions_history_cash[cash] = money;
            cash++;
        }
        else if(mode==2){
            balace= balace - money;
            transactions_history_card[card] = money;
            card++;
        }
        else if(mode==3){
            balace= balace - money;
            transactions_history_cheque[cheque] = money;
            cheque++;
        }
        else if(mode==4){
            balace= balace - money;
            transactions_history_online[online] = money;
            online++;
        }
        else if(mode==5){
            if(money>credit_limit){
                System.out.println("Credit limit exceeded");
            }
            else{
                transactions_history_credit[credit] = money;
                credit_limit= credit_limit - money;
                credit++;
            }
       }

    }}
    public void tranctions_history(){
        Scanner input1 = new Scanner(System.in);
        System.out.println("1.Cash 2.Card 3.Cheque 4.Online 5.credit");
        System.out.print("Enter the mode of payment: ");
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
        else if(mode1==5){
            for(int i=0; i<=credit; i++){
                System.out.println("Credit: "+transactions_history_credit[i]);
            }
        }
    }
    void balace(){
        System.out.println("Your Balance = "+balace);
    }
}
public class bank {
    public static void main(String[] args) {
        Payment_Management obj = new Payment_Management();
        obj.addMoney(100000000);
        System.out.println("cash========================");
        obj.tranctions(1500);
        obj.tranctions_history();
        obj.balace();
       
        System.out.println("credit========================");
        obj.tranctions(500);
        obj.tranctions_history();
        obj.balace();
       
        System.out.println("cheque========================");
        obj.tranctions(2500);
        obj.tranctions_history();
        obj.balace();
       
        System.out.println("card========================");
        obj.tranctions(6500);
        obj.tranctions_history();
        obj.balace();
        
        System.out.println("online========================");
        obj.tranctions(50000);
        obj.tranctions_history();
        obj.balace();
       

    }
             
}