class NumberWrapper {
    int value;
    NumberWrapper(int val) {
        this.value = val;
    }
}
public class MemoryPass {
    public static void main(String[] args) {
        NumberWrapper nodeA = new NumberWrapper(10);
        NumberWrapper nodeB = nodeA; 
        System.out.println("Initial NodeA Value: " + nodeA.value);
        nodeB.value = 50;
        System.out.println("NodeA Value after NodeB mutation: " + nodeA.value);
    }
}