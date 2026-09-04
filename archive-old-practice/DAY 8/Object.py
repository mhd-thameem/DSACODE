class student:
    def __init__(self,n,a):
        self.name=n;
        self.age=a;
    def display(self):
        print(f"Student Name:{self.name} , Age: {self.age}")
s1=student("Thammi",20) 
s1.display()
