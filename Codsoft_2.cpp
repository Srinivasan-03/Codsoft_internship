#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char ops;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> ops;
    switch(ops) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Zero division error" << endl;
            break;
        default:
            cout << "Error: Invalid operation" << endl;
    }
    return 0;
}
