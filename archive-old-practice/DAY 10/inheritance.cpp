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
    void show_person(){
        cout<<"Name:"<<name<<", Age:"<<age<<endl;
    }
};
class student:public person{
public:
    string course;
    student(string s,int a,string c):person(s,a){
        course=c;
    }
    void show_student(){
        cout<<"Course:"<<course;
    }
};
int main(){
    student s1("Thameem",20,"BCA");
    s1.show_person();
    s1.show_student();
    return 0;
}