def funcA():
    print("A starting")
    funcB();
    print("A finishing")
def funcB():
    print("B starting")
    funcC();
    print("B finishing")
def funcC():
    print("C starting")
    print("C finishing")
funcA();