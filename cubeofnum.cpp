#include<iostream>
using namespace std;

int cube(int x)
{
    return x*x*x;
}

int main()
{
    int num;
    cout<<" Enter the number: ";
    cin>>num;
    cout<<"The cube of number "<<num<<" is "<<cube(num)<<endl;
return 0;
}
