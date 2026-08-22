public class TransferService {

    public boolean transfer(BankAccount from, BankAccount to, double amount) {
        if(to==null||from==null){
            return false;
        }
        if(from==to){return false;}
        boolean success=from.withdraw(amount);
        if(success){
            to.deposit(amount);
            return true;
        }return false;
    }
}