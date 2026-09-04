import java.util.Scanner;
public class Condition {
    public static void main(String[] args){
        int N,ans=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter N:");
        N=sc.nextInt();
        int k=N;
        while(k>0){
            System.out.print(k+" ");
            k--;
        }
        System.out.println("Blastoff!");
        for(int i=1;i<=N;i++){
            ans*=i;
        }
        System.out.println("The Factorial of "+N+" is "+ans);
        sc.close();
    }
}
