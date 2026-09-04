#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
};
void display(struct student s2){
        printf("Student Name:%s, Age:%d\n",s2.name,s2.age);
    }
int main(){
    struct student s1;
    strcpy(s1.name,"Thammi");
    s1.age=20;
    display(s1);
    return 0;
}