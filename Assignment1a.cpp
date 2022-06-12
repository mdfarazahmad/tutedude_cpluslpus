// Write a C++ program to find if an integer is even or odd or neither (0).

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: " << endl;
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is even";
    }
    else {
        cout << n << " is odd";
    }

    return 0;
}
