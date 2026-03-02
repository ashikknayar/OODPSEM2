#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if ((year % 4 ==0 && year % 100 != 0 ) || (year % 400 == 0))
    {
        cout<<year<<" Entered year is Leap year"<<endl;
    }
    else
    {
        cout<<year<<" Entered year is not a Leap year"<<endl;
    }
    return 0;
}   