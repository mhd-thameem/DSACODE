#include<iostream>
using namespace std;
class person{
public:
    string name;
    int age;
    person(string s,int a){
        name=s;
        age=a;
    }
    virtual void display(){
        cout<<"Name:"<<name<<", Age:"<<age<<endl;
    }
};
class student:public person{
public:
    string course;
    student(string s,int a,string c):person(s,a){
        course=c;
    }
    void display() override{
        cout<<"Name:"<<name<<", Age:"<<age<<", Course:"<<course;
    }
};
int main(){
    student s1("Thameem",20,"BCA");
    s1.display();
    return 0;
}