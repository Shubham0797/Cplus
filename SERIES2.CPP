//sum= 1/x + 1/x*x + 1/x*x*x + .............

#include<iostream.h>
#include<conio.h>
void main()
{
 int x,n,b=1;
 float a,c,sum=0;
 clrscr();
 cout<<"enter a number:";
 cin>>x;
 cout<<"enter n=";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 a=1;
  for(int j=1;j<=i;j++)
  {
   c=1;
   c/=x;
   a=a*c;
   cout<<"a"<<a<<endl;

  }
  sum+=a;
 }
 cout<<"sum="<<sum;

 getch();
}