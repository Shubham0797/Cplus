// program to check number is palindrome or not

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int rem,temp,num=0;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        num=num*10+rem;
        
        temp/=10;
    }
    if(num==n)
    cout<<n<<" is a palindrome number";
    else
    cout<<n<<" is not a palindrome number";
    return 0;
}