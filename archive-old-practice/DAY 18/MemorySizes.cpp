#include<iostream>
using namespace std;
struct inefficient{
    char a;
    int age;
    char k;
};
struct optimized{
    int sum;
    char o;
    char p;
};
int main(){
    inefficient i={'a',32,'g'};
    optimized k={42,'y','c'};
    cout << sizeof(i) << "  " <<sizeof(k);
    return 0;
}