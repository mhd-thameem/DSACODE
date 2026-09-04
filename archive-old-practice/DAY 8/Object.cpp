#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    void display(){
        cout<<"Student Name: "<<name<<", Age: "<<age;
    }
};
int main(){
    student s1;
    s1.name="Thammi";
    s1.age=20;
    s1.display();
    return 0;
}