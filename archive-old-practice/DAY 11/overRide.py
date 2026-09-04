class person:
    def __init__(self,n,a):
        self.name=n;
        self.age=a;
    def display(self):
        print(f"Student Name:{self.name} , Age: {self.age}")
class student(person):
    def __init__(self,n,a,c):
        super().__init__(n,a)
        self.course=c;
    def display(self):
        print(f"Student Name:{self.name} , Age: {self.age}, Course:{self.course}")
s1=student("Thammi",20,"BCA")
s1.display()
