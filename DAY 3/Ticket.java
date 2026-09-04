import java.util.Scanner;
public class Ticket {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your Age");
        int age=sc.nextInt();
        if(age>=0 && age<=5){
        System.out.println("Ticket is Free!");
        }else if(age<=12){
            System.out.println("Ticket Price is $5!");
        }else if(age<=60){
            System.out.println("Ticket Price is $10!");
        }else if(age<120){
            System.out.println("Ticket Price is $7!");
        }else{
            System.out.println("Enter Valid Age!!!");
        }
        sc.close();
    }
}
