//program to find factorial of a number given as command line argument
#include <stdio.h> 
#include <stdlib.h> 

int fact(int n)
{
 if (n == 0)
 return 1;
 else {
 int ans = 1;
 int i;
 for (i = 1; i <= n; i++) {
 ans = ans * i;
 }
 return ans;
 }
}

int main(int argc, char* argv[])
{

 if (argc == 1) {
 printf("No command line argument exist Please provide them first \n");
 return 0;
 } else {
 int i, n, ans;
 for (i = 1; i < argc; i++) {
 n = atoi(argv[i]);
 ans = fact(n);
 
 printf("%d\n", ans);
 }
 return 0;
 }
}