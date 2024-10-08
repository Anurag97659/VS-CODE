
class BankAccount{
    public int Account_number;
    public String Account_holder_name;
    public String Account_type ;
    public int Account_balance;
    public void setAccountDetails( int Account_number, String Account_holder_name, String Account_type, int Account_balance){
        this.Account_number=Account_number;
        this.Account_holder_name=Account_holder_name;
        this.Account_type=Account_type;
        this.Account_balance=Account_balance;
    }
    public void deposit(int deposit){
        this.Account_balance+=deposit;
    }
    public void withdraw(int withdraw){
        this.Account_balance-=withdraw;
    }
    public void checkblance(){
        System.out.println("Account holder name = "+Account_holder_name);
        System.out.println("Account number = "+Account_number);
        System.out.println("Account type = "+Account_type);
        System.out.println("Account balance = "+Account_balance);
        System.out.println("");
    }
}

public class anu {
    public static void main(String [] args){
       BankAccount a = new BankAccount();
       a.setAccountDetails(1234567890,"Anurag_Nidhi", "savings", 10);
       a.checkblance();
       a.deposit(90);
       a.checkblance();
       a.withdraw(10);
       a.checkblance();
      
    }
}