#include<iostream>
using namespace std;
class SimpleVector{
    public:
    int cap,sz;
    int* arr;
    SimpleVector(){
        cap=2;
        arr=new int[cap];
        sz=0;
    }
    void push_back(int val){
        if(cap==sz){
            cap*=2;
            int* newArr=new int[cap];
            for(int i=0;i<sz;i++){
                newArr[i]=arr[i];
            }
            delete[] arr;
            arr=newArr;
        }
        arr[sz]=val;
        sz++;
    }
    int get(int index){
        return arr[index];
    }
    int size(){
        return sz;
    }
    int capacity(){
        return cap;
    }
    ~SimpleVector(){
        delete[]arr;
    }

};
int main(){
    return 0;
}