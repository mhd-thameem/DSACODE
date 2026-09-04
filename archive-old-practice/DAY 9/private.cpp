#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    void setAge(int newAge){
        if(newAge>0){
            age=newAge;
        }else{
            cout<<"Error";
        }
    }
    void setName(string newname){
        name=newname;
    }
    string getName(){
        return name;
    }
};
int main(){
    student s1;
    s1.setName("Thammi");
    s1.setAge(20);
    cout<<"Student Name: "<<s1.getName();
    return 0;
}