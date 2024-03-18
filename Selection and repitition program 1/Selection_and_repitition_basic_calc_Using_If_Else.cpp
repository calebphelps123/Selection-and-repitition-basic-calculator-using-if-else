// Selection and repitition program 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip> // For setw()

using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (op == '/') {
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << fixed << setprecision(2) << static_cast<double>(num1) / num2 << endl;
        else
            cout << "Error! Division by zero." << endl;
    }
    else {
        cout << "Error! Operator is not supported." << endl;
    }

    return 0;
}