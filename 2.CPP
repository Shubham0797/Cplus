#include<iostream.h>
#include<stdlib.h>
#include<math.h>
int main (int argc,char *argv[])
{
  if(argc==1)
  {
   cout<<"no argument passed. please add them first"<<endl;
   return 0;
  }
  int first,second,temp;

  first=atoi(argv[1]);
  second=atoi(argv[2]);

  temp=first;
  first=second;
  second=temp;

  cout<<"after swaping:  first="<<first<<endl;
  cout<<"after swaping:  second="<<second<<endl;
  return 0;
}