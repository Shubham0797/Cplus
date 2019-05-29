// print 1,3,5,7,9,11,13,15,17,19,.....n  and sum
#include<conio.h>
#include<iostream.h>
void main()
{
 int sum=0,n;
 clrscr();
 cout<<"enter the maximum number in the series:";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  if(i%2==1)
     {
     cout<<i<<endl;
     sum+=i;
     }
 }
 cout<<"sum="<<sum;
 getch();
}