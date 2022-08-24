//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"Enter values of a b c: ";
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"Average of "<<a<<" "<<b<<" and "<<c<<" is "<<avg;
    return 0;

}