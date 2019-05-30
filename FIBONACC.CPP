// to print fibonacci series

#include<iostream.h>
#include<conio.h>
void main()
{
 int a=0,b=1,c=0;
 clrscr();
 cout<<a<<endl;

 cout<<b<<endl;

 while(c<100)
 {
   c=a+b;
   a=b;
   b=c;
   cout<<c<<endl;
 }
 getch();
}