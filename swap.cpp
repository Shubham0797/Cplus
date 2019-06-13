// program to swap two numbers
#include <iostream>
#include <stdlib.h>

using namespace std;
void swap(int c, int d)
{
    int temp;
    temp=c;
    c=d;
    d=temp;
    cout<<"after swaping"<<endl;
    cout<<"a="<<c<<endl;
    cout<<"b="<<d;
}

int main()
{
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    swap(a,b);
    
    return 0;
}