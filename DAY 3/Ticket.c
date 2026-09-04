#include<stdio.h>
int main(){
    int age;
    printf("Enter your Age:");
    scanf("%d",&age);
    if(age>=0 && age<=5){
        printf("Ticket is Free!");
    }else if(age<=12){
        printf("Ticket Price is $5!");
    }else if(age<=60){
        printf("Ticket Price is $10!");
    }else if(age<120){
        printf("Ticket Price is $7!");
    }else{
        printf("Enter Valid Age!!!");
    }
    return 0;
}