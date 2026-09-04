public class BankAccount {
    // 1. Fields (State / Data living inside the object)
    private String accountHolder;
    private double balance;

    // 2. Constructor (Instructions to build the object)
    public BankAccount(String accountHolder, double initialBalance) {
        this.accountHolder = accountHolder;
        this.balance = initialBalance;
    }

    // 3. Methods (Behaviors / What the object can do)
    public void deposit(double amount) {
        if (amount > 0) {
            this.balance += amount;
        }
    }

    public double getBalance() {
        return this.balance;
    }
    public boolean withdraw(double amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            return true;
        }
        return false;
    }
}
