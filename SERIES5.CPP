//1,1,2,2,4,4,8,8,16,16,....

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 int n,a ;
 clrscr();
 cout<<"enter number of terms in series:";
 cin>>a;
 for(int i=1;i<=a;i++)
 {
  if(i%2==1)
  {
   n=i/2;
   cout<<pow(2,n)<<",";

  }
  if(i%2==0)
  {
   n=i/2;
   cout<<pow(2,--n)<<",";
  }
 }
 getch();
}