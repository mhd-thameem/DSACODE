class calculator:
    def add(self,a,b,c=None):
        if c is not None:
            return a+b+c
        return a+b
c=calculator()
print(f"{c.add(1,3)},{c.add(1,3,6)},{c.add(4.2,3.6)}")


