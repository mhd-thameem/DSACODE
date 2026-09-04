#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n + 1; i++) {
        cout << "Index " << i << " Value: " << *(arr + i) << endl;
    }
    return 0;
}