// 1,1,2,3,4,9,8,27,....
#include<iostream.h>
#include<conio.h>
#include<math.h>
void GP1(int n)
{
 int m=n;
 n--;
 n=n/2;
 cout<<m<<"th term is "<<pow(2,n);
}
void GP2(int n)
{
 int m=n;
 n--;
 n=n/2;
 cout<<m<<"th term is "<<pow(3,n);
}
void main()
{
 int n;
 clrscr();
 cout<<"enter which term to find in the series:";
 cin>>n;
 if(n%2==1)
 GP1(n);
 else
 GP2(n);
 getch();
}
