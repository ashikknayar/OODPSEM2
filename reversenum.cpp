#include<iostream>
using namespace std;
int main()
{
    
    int num, revnum=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>0)
    {
      int digit = num%10;
      revnum = revnum*10 + digit;
      num = num/10;
    }
    cout<<"The reverse number is: "<<revnum<<endl;
    return 0;
}