#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    char op;
    double a, b, res;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (op) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        default:
            cout << "Error - operator is not correct";
            res = -DBL_MAX;
    }

    if (res != -DBL_MAX)
        cout << "Result: " << res;
    return 0;
}