// simple calculator program

#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;

    cout << "Enter the Operator (+ , -, *, /) : " << endl;
    cin >> op;

    cout << "Enter first Number" << endl;
    cin >> num1;

    cout << "Enter Second Number" << endl;
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        cout << "Output " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        cout << "Output " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        cout << "Output " << num1 * num2;
        break;

    case '/':
        if (num2 != 0.0)
        {
            cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            cout << "Output " << num1 / num2;
        }
        else
            cout << " Divide by Zero condition";
        break;

    default:
        cout << op << " is an invalid operator " << endl;
        cout << " enter a valid operator to perform operation" << endl;
    }

    return 0;
}