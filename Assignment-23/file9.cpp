//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two number: ";
    cin>>a>>b;
    c=a>b?a:b;
    cout<<"max is "<<c;
    return 0;
}