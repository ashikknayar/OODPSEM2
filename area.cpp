#include<iostream>
using namespace std;

float circlearea(float R)
{
    return 3.14*R*R;
}
float trianglearea(float b, float h)
{
    return 0.5*b*h;
}
float rectarea(float l, float w)
{
    return l*w;
}
int main()
{
    float radius,height,width,length,base;
    cout<<"Enter Radius of circle ";
    cin>>radius;
    cout<<"Area of Circle= "<<circlearea(radius)<<endl;

    cout<<"Enter base of height for Triangle ";
    cin>>base>>height;
    cout<<"Area of Triangle ="<<trianglearea(base,height)<<endl;

    cout<<"Enter length of width for rectangle ";
    cin>>length>>width;
    cout<<"Area of Rectangle="<<rectarea(length,width)<<endl;
    return 0;
}