public class OopDay8 {
static class student{
    String name;
    int age;
    student(String n,int a){
        name=n;
        age=a;
    }
    void display(){
        System.out.println("Student Name:"+name+", Age:"+age);
    }
}
    public static void main(String[] args){
        student s1=new student("Thammi",20);
        s1.display();
    }
}
