#include<stdio.h>
int summ(int array[],int n){
    int total=0;
    for(int i=0;i<n;i++){
        total+=array[i];
    }
    return total;
}
int maximumm(int array[],int x){
    int maxi=array[0];
    for(int i=0;i<x;i++){
        if(maxi<array[i]){
            maxi=array[i];
        }
    }return maxi;
}
int main(){
    int arr[5]={12, 45, 7, 23, 56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int totSum=summ(arr,n);
    int maxi=maximumm(arr,n);
    printf("The Sum of Array is:%d\n",totSum);
    printf("The Maximum Element of Array is:%d",maxi);
    return 0;
}