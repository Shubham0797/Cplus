//to print the nth power of a number

#include<iostream.h>
#include<conio.h>
void main()
{
 int n,p;
 clrscr();
 cout<<"enter a number  ";
 cin>>n;
 cout<<"enter the power to be calculated: ";
 cin>>p;
 int a=1;
 for(int i=0;i<p;i++)
 {
   a=a*n;
 }
 cout<<p<<"th power of "<<n<<" is "<<a;
 getch();
}