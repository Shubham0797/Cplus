// to print following series
//  1,1,2,3,4,9,8,27,....

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n;
 clrscr();
 cout<<"enter number of terms in the series:";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  if(i%2==0)
  {
    int num=i;

    num=num/2;
    cout<<pow(3,num-1)<<",";
  }
  else
  {
    int num=i;
    num--;
    num=num/2;
    cout<<pow(2,num)<<",";
  }
 }
 cout<<".....";
 getch();
}