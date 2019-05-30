// prefix and postfix increment

#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 cout<<"enter a=";
 cin>>a;
 b=a++ + a++;
 cout<<"b="<<b<<"\na="<<a;
 getch();
}
