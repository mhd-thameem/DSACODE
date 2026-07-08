package DAY19;
public class Stack{
    static void functC(){
        System.out.println("C Starting");
        System.out.println("C finishing");
    }
    static void functB(){
        System.out.println("B Starting");
        functC();
        System.out.println("B finishing");
    }
    static void functA(){
        System.out.println("A Starting");
        functB();
        System.out.println("A finishing");
    }
    public static void main(String[] args){
        functA();
    }
}
