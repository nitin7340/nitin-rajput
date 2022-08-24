//Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    int r;
    float A;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    A=3.14*r*r;
    cout<<"Area of circle having radius "<<r<<" is "<<A;
    return 0;
}