public class privates {
static class student{
    private String name;
    private int age;
    void setName(String s){
        name=s;
    }
    String getName(){
        return name;
    }
    void setAge(int a){
        if(a>0){
            age=a;
        }else{
            System.out.println("Error");
        }
    }
    int getAge() {
    return age;
}
}
    public static void main(String[] args){
        student s1=new student();
        s1.setAge(20);
        s1.setName("Thammi");
        System.out.println("Name:"+s1.getName()+" Age:"+s1.getAge());
        
    }
}
