#include <iostream>

using std::cout;
using std::endl;


void numsFibonacci(int endNumber) {
    long startNum1 = 1;
    long startNum2 = 1;
    long tmp = 0;
    cout << startNum1 << endl;
    cout << startNum2 << endl;
    while ((startNum1 + startNum2) < endNumber) {
        tmp = startNum1 + startNum2;
        cout << tmp << endl;
        startNum1 = startNum2;
        startNum2 = tmp;
    }
}


int main() {
    numsFibonacci(23534534); // example
    return 0;
}