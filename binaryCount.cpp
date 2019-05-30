#include <iostream.h>
#include<conio.h>
int main()
{
    int n,m;
    long a=1,bin=0;
    cin >> n;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0)
    {
        int rem=n%2;
        n=n/2;
        bin+=a*rem;
        a=a*10;
        //cout<<rem<<" "<<n<<" "<<bin<<"  "<<a<<" "<<endl;
    }
    //cout<<bin<<endl;
    int b=0 ;
    //m = bin;
    int count = 0;
    while (bin > 0) {
      //cout << count << " " << bin << " " <<endl;
      if (bin % 10 == 1) {
        count++;
        if(count>b)
        b=count;
      } 
      else {
        count = 0;
      }

      bin=bin/10;
     
    }
    cout <<b;

    return 0;
}
