class InvalidTransactionException extends RuntimeException{
    InvalidTransactionException(String message){
        super(message);
    }
}
class bankAccount{
    private double balance;
    bankAccount(double balance){
        this.balance=balance;
    }
    public void withdraw(double amount){
        if(amount<=0){
            throw new IllegalArgumentException ("Withdrawal amount must be positive");
        }
        else if(amount>balance){
            throw new InvalidTransactionException ("Insufficient balance: requested " + amount + ", available " + balance);
        }else{
            balance-=amount;
        }
    }
}
public class atmApp {
    public static void main(String[] args){
    bankAccount b=new bankAccount(100.0);
    try{
        b.withdraw(150.0);
    }catch(InvalidTransactionException e){
        System.out.println(e.getMessage());
    }finally{
        System.out.println("Transaction session closed.");
    }
}
}
