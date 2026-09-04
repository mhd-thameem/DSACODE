#include<stdio.h>
int main(){
    double USD;
    printf("Enter the US dollar u wanna convert to INR:");
    scanf("%lf",&USD);
    double INR=USD*94.50;
    printf("After Conversion INR is %lf",INR);
    return 0;
}