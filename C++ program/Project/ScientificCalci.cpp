#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class ScientificCalculator {
public:
    void showMenu() {
        cout << "\nScientific Calculator\n";
        cout << "====================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "10. Logarithm (base 10)\n";
        cout << "11. Natural Logarithm (ln)\n";
        cout << "0. Exit\n";
    }

    void performOperation(int choice) {
        double num1, num2, result;
        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero!\n";
                }
                break;

            case 5:
                cout << "Enter the base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Negative input for square root!\n";
                }
                break;

            case 7:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                result = sin(num1);
                cout << "Result: " << result << endl;
                break;

            case 8:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                result = cos(num1);
                cout << "Result: " << result << endl;
                break;

            case 9:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                result = tan(num1);
                cout << "Result: " << result << endl;
                break;

            case 10:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0) {
                    result = log10(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Non-positive input for logarithm!\n";
                }
                break;

            case 11:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0) {
                    result = log(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Non-positive input for natural logarithm!\n";
                }
                break;

            case 0:
                cout << "Exiting the calculator. Goodbye!\n";
                exit(0);

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    void run() {
        int choice;
        while (true) {
            showMenu();
            cout << "\nEnter your choice: ";
            cin >> choice;
            performOperation(choice);
        }
    }
};

int main() {
    ScientificCalculator calculator;
    calculator.run();
    return 0;
}