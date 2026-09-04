#include <iostream>
#include <cstdlib> 
using namespace std;
int main() {
    int stackVar = 42;
    int* cppHeapPtr = new int(100);
    int* cHeapPtr = (int*)malloc(sizeof(int));
    if (cHeapPtr != nullptr) {
        *cHeapPtr = 200;
    }
    cout << "Stack Address:    " << &stackVar << endl;
    cout << "C++ Heap Address: " << cppHeapPtr << endl;
    cout << "C Heap Address:   " << cHeapPtr << endl;
    delete cppHeapPtr; 
    free(cHeapPtr);  
    return 0;
}