//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"values before swapping"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Values after swapping"<<endl;
    cout<<"a= "<<a<<" b= "<<b;
    return 0;
}