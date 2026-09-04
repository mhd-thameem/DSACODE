abstract class cryptic{
    abstract void hash_data(String input);
}
class SHA256_Sim extends cryptic{
    void hash_data(String input){
        System.out.println("SHA256: "+input+" parsed to hex blocks");
    }
}
public class abstracti{
    public static void main(String[] args){
        SHA256_Sim s=new SHA256_Sim();
        s.hash_data("Heloo");
    }
}