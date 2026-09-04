#include<iostream>
using namespace std;
int main(){
    int matrix[3][3]={{1,2,3}, {4,5,6}, {7,8,9}},sum=0;
    for(int i=0;i<3;i++){
        sum+=matrix[i][i];
    }
    cout<<"The Sum of Diagonals is:"<<sum;
    return 0;
    
}