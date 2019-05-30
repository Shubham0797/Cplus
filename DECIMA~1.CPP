#include <iostream.h>
#include<conio.h>
int main()
{
    int a=1,n,bin=0,m;
    clrscr();
    cin >> n;
	m=n;

    while(n>0)
    {
	int rem=n%2;
	n=n/2;
	bin+=a*rem;
	a=a*10;
    }
	cout<<"binary equivalent of "<<m<<" is "<<bin;
    getch();
}