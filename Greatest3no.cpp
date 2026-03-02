#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter first no: " << endl;
    cin >> num1;

    cout << "Enter second no: " << endl;
    cin >> num2;

    cout << "Enter third no: " << endl;
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is the greatest no.";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is the greatest no.";
    }
    else
    {
        cout << num3 << " is the greatest no.";
    }

    return 0;
}
