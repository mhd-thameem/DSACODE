interface connection{
    void connect();
}
interface security{
    void encrypt();
}
class NetworkNode implements connection,security{
    public void connect(){
        System.out.println("Node connected to network.");
    }
    public void encrypt(){
        System.out.println("Traffic encrypted via AES-256.");
    }
}
public class interfaceDemo{
    public static void main(String[] args){
        NetworkNode N=new NetworkNode();
        N.connect();
        N.encrypt();
    }
}