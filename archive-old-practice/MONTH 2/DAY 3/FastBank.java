import java.util.HashMap;

public class FastBank {
    private HashMap<String,BankAccount>accountMap;
    public FastBank() {
        this.accountMap = new HashMap<>();
    }
    void registerAccount(String accountNum,BankAccount user){
        if(accountNum!=null && user!=null){
            this.accountMap.put(accountNum,user);
        }
    }
    BankAccount getAccount(String accountNum){
        if(accountNum==null){
            return null;
        }else{
            return this.accountMap.get(accountNum);
        }
    }
    int getTotalAccounts(){
        return this.accountMap.size();
    }

}