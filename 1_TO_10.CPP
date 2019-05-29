
#include<iostream.h>
#include<conio.h>
void main()
{
 int n=1;
 clrscr();
 go:
 cout<<n<<endl;
 n++;
 while(n<11)
  goto go;
  getch();
}