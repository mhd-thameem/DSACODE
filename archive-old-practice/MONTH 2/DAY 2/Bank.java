import java.util.ArrayList;

public class Bank {
    private ArrayList<BankAccount> accounts;

    public Bank() {
        this.accounts = new ArrayList<>();
    }

    // 1. Add an account to the list (ignore if account is null)
    public void addAccount(BankAccount account) {
        if(account!=null){
            accounts.add(account);
        }
    }

    // 2. Find and return an account by the account holder's name
    // Return null if not found
    public BankAccount findAccountByName(String name) {
        for(BankAccount b:accounts){
            if(name.equals(b.getAccountHoldername())){
                return b;
            }
        }return null;
    }
}