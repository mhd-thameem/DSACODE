#include<stdio.h>
int main(){
    int N,ans=1;
    printf("Enter N:");
    scanf("%d",&N);
    int k=N;
    while(k>0){
        printf("%d ",k);
        k--;
    }
    printf(" Blastoff\n");
    for(int i=1;i<=N;i++){
        ans*=i;
    }
    printf("The Factorial is:%d",ans);
    return 0;
}