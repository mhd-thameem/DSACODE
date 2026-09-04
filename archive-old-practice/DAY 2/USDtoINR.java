import java.util.Scanner;
public class USDtoINR {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double USD,ans;
        System.out.println("Enter the USd to convert to Inr:");
        USD=sc.nextDouble();
        ans=USD*94.50;
        System.out.println(ans);
        sc.close();
    }
}
