//Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,V;
    cout<<"Enter the values of l,b,h: ";
    cin>>l>>b>>h;
    V=l*b*h;
    cout<<"volume of cuboid is "<<V;
    return 0;
}