#include<iostream>
using namespace std;
class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    double add(double e,double d){
        return e+d;
    }
};
int main(){
    calculator c1;
    cout<<c1.add(1,4)<<"  "<<c1.add(1,4,6)<<"  "<<c1.add(1.4,6.23);
    return 0;
}