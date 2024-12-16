#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    // Prompt user for first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt user for operator
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    // Prompt user for second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform operation based on operator
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
                return 0;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            cout << "Error! Invalid operator." << endl;
            return 0;
    }

    // Display result
    cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;
}
