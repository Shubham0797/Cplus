// to print the sum of the cube of digits of a three digit numbers
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a[11],i,N=0,m,count=0;
 clrscr();
 printf("enter a 3 digit number:");
 scanf("%d",&m);
 n=m;
 while(n!=0)
 {
    n=n/10;
    count++;
 }
 printf("number of digits=%d\n",count);
 for(i=0;i<count;i++)
 {
	a[i]=m%10;
	m=m/10;
	N=N+a[i]*a[i]*a[i];
 }

 printf("sum of cube=%d",N);
 getch();


}