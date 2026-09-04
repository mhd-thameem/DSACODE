class person{
    String name;
    int age;
    person(String s,int a){
        name=s;
        age=a;
    }
    void show_person(){
        System.out.println("Name:"+name+"Age:"+age);
    }
}
class student extends person{
    String course;
    student(String s,int a,String c){
        super(s,a);
        this.course=c;
    }
    void show_student(){
        System.out.println("Course:"+course);
    }
}
public class inheritance{
    public static void main(String[] args){
        student s1=new student("Thammi",20,"BCA");
        s1.show_person();
        s1.show_student();
    }
}