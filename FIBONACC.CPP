// to print fibonacci series

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int a=0,b=1,c=0;
 
 cout<<a<<endl;

 cout<<b<<endl;

 while(c<100)
 {
   c=a+b;
   a=b;
   b=c;
   cout<<c<<endl;
 }
 return 0;
}