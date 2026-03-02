#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the natural number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "The sum of natural numbers = " << sum;

    return 0;
}
