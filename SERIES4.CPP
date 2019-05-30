//series1,2,1,3,2,5,3,7,5,11,8,13,.....

#include<iostream.h>
#include<conio.h>
#include<math.h>
#define MAX 1000
void fibo(int n)
{
    int a=0,b=1,next;
    for(int i=1;i<=n;i++)
    {
       next=a+b;
       a=b;b=next;
    }
    cout<<a;
}
void prime(int n)
{
 int i,j,flag,count=0;
 for(i=2;i<=MAX;i++)
 {
   flag=0;
   for(j=2;j<i;j++)
   {
    if(i%j==0)
    {
     flag=1;
     break;
    }
   }
   if(flag==0)
   {
    if(++count==n)
    {
     cout<<i;
     break;
    }
   }
 }

}

void main()
{
  int n;
  clrscr();
  cout<<"enter number of term to be fetched:";
  cin>>n;
  if(n%2==1)
    fibo(n/2+1);
  else
    prime(n/2);

  getch();
}