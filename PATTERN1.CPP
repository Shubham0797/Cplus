/* to print pattern
	   *
	   * *
	   * * *
	   * * * *
*/

#include<iostream.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 for(int i=0;i<8;i++)
    for(int j=0;j<=i;j++)
       cout<<"* ";

 cout<<"\n";
 getch();
}