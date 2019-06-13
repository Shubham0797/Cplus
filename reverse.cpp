// program to calculate reverse digit of a number
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
        sum=sum*10+rem;
        n/=10;
    }
    
    cout<<"sum of digits is "<<sum;
    return 0;
}