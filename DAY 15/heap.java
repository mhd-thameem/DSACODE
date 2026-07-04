public class heap{
    public static void main(String[] args){
        int stackVar=42;
        Integer heapObj=Integer.valueOf(100);
        System.out.println("Stack primitive value:" + stackVar);
        System.out.println("Heap Object JVM ID (Hash):" + System.identityHashCode(heapObj));
    }
}