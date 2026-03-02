#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subt(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

float divsn(int a, int b)
{
    if (b != 0)
        return (float)a / b;
    else
    {
        cout << "Error: division by zero" << endl;
        return 0;
    }
}

int modul(int a, int b)
{
    return a % b;
}

int main()
{
    int num1, num2;
    char ope;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    cout << "Enter the symbol (+ ,- ,* ,/, %): " << endl;
    cin >> ope;

    switch (ope)
    {
    case '+':
        cout << "The result: " << add(num1, num2) << endl;
        break;

    case '-':
        cout << "The result: " << subt(num1, num2) << endl;
        break;

    case '*':
        cout << "The result: " << multi(num1, num2) << endl;
        break;

    case '/':
        cout << "The result: " << divsn(num1, num2) << endl;
        break;

    case '%':
        cout << "The result: " << modul(num1, num2) << endl;
        break;

    default:
        cout << "Error: Invalid Operator" << endl;
    }

    return 0;
}