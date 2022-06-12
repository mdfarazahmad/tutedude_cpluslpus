#include <iostream>
using namespace std;

int main() 
{
    char op;
    float first, second;

    cout << "Enter first number: " << endl;
    cin >> first;
    cout << "Enter operator(+, -, *, /): " << endl;
    cin >> op;
    cout << "Enter second number: " << endl;
    cin >> second;

    switch (op) {

        case '+':
            cout << first << " + " << second << " = " << first + second;
            break;
        case '-':
            cout << first << " - " << second << " = " << first - second;
            break;
        case '*':
            cout << first << " * " << second << " = " << first * second;
            break;
        case '/':
            cout << first << " / " << second << " = " << first / second;
            break;
        default:
        // If the operator other than (+, -, *, /, %), then show error message.
            cout << "Error! Invalid operator.";
            break;

    }
    return 0;
}