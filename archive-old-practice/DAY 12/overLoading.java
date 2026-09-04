public class overLoading{
    static class calculator{
        int add(int a,int b){
            return a+b;        
        }
        int add(int a,int b,int c){
            return a+b+c;        
        }
        double add(double a,double b){
            return a+b;        
        }
    }
    public static void main(String[] args){
        calculator c=new calculator();
        System.out.println(c.add(1,2)+"  "+c.add(4,6,2)+"  "+c.add(3.24,7.54));
    }
}