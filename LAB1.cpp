#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the no.";
    int num;
    cin>>num;

    if(num % 2 ==0)
    {
        cout<<"The Entered no is even";
    }
    else
    {
        cout<<"The Entered no is odd";
    }
    return 0;
}