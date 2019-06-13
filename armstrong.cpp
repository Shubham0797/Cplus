// program to check a number is armstrong or not

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int rem,sum=0,temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n/=10;
    }
    if(sum==temp)
    cout<<temp<<" is a armstrong number";
    else
    cout<<temp<<" is not an armstrong number";
    return 0;
}