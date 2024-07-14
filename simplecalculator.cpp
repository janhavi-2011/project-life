#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter the value oF First operand:";
    cin >> a;
    cout << "Enter the value oF second operand:";
    cin >> b;
    cout << "Enter the operation you want to perForm:";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Addition oF two operand is:" << (a + b) << endl;
        break;
    case '-':
        cout << "Subtraction oF two operand is:" << (a - b) << endl;
        break;
    case '*':
        cout << "Multiplication oF two operand is :" << (a * b) << endl;
        break;
    case '/':
        cout << "Division oF two operand is :" << (a / b) << endl;
        break;
    case '%':
        cout << "Modulus oF two operand is :" << (a % b) << endl;
        break;

    default:
        cout << "invalid operator";
        break;
    }
}