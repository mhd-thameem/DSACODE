class student:
    def __init__(self,n,a):
        self.__name=n;
        self.__age=a;
    def setName(self,s):
        self.__name=s
    def getName(self):
        return self.__name
    def setAge(self,a):
        if a>0:
            self.__age=a
        else:
            print("Error")
    def getAge(self):
        return self.__age   
s1=student("Thammi",20)
s1.setName("Thameem")
s1.setAge(21)
print(f"Student Name:{s1.getName()} , Age: {s1.getAge()}")
