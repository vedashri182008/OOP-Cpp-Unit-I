#include <iostream>
using namespace std;

int add(int, int);   // Function declaration

int main() {
    int a = 10, b = 20;

    cout << "Sum = " << add(a, b) << endl;

    return 0;
}

int add(int x, int y) {   // Function definition
    return x + y;
}
