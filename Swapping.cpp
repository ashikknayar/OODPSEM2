#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter any two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Before Swapping"<<" a= "<<a<<" b= "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping"<<" a= "<<a<<" b = "<<b<<endl;
    return 0;
}