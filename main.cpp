#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    Calculator calc;

    int choice;
    int a, b;

    cout << "--- Calculator ---" << endl

        while (true) {
            cout << "\nMenu:" << endl;
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "0. Exit" << endl;
            cout << "Choose an action: ";
            cin >> choice;

            if (choice == 0) {
                cout << "Exiting the program." << endl;
                break;
            }

            cout << "Enter two integers separated by a space: ";
            cin >> a >> b;

            cout << "Result: ";
            switch (choice) {
            case 3:
                cout << a << " * " << b << " = " << calc.multiply(a, b) << endl;
                break;
            default:
                cout << "This function is not yet implemented!" << endl;
                break;
            }
        }

    return 0;
}