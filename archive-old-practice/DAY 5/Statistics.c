#include<stdio.h>
int main(){
    int arr[5]={12, 45, 7, 23, 56};
    int sum=0,maxi=arr[0];
    for(int i=0;i<5;i++){
        sum+=arr[i];
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    printf("The Sum of Array is:%d\n",sum);
    printf("The Maximum Element of Array is:%d",maxi);
    return 0;
}