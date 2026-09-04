class person{
    String name;
    int age;
    person(String s,int a){
        name=s;
        age=a;
    }
    void display(){
        System.out.println("Name:"+name+"Age:"+age);
    }
}
class student extends person{
    String course;
    student(String s,int a,String c){
        super(s,a);
        this.course=c;
    }
    @Override
    void display(){
        System.out.println("Name:"+name+"Age:"+age+" Course:"+course);
    }
}
public class overRide{
    public static void main(String[] args){
        student s1=new student("Thammi",20,"BCA");
        s1.display();
    }
}
