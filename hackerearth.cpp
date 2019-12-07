/*  
	Little Syed loves brute force. He thinks that brute force can be the solution to any problem in the world. 
	You give him any question, and he'll have a brute force answer ready for you, almost all the time. 
	His good friend Little Jhool (Like, always!) decides to teach him a lesson, by giving him problems which cannot 
	be solved by brute force, because he wants Syed to learn algorithms.

	Given a number, n, Syed needs to find the number closest to n, though less than n which satisfies Jhool's swinging theorem.
	Jhool's swinging Theorem: A number n, such that it can be expressed as a sum of two positive algebraic cubes; AND, if that number can be expressed in such a manner in more than one way - it satisfies the theorem.

	Now, everyone here on HackerEarth knows how much we hate Little Jhool (No, not really!) - so we want you to help Syed in figuring out Jhool's queries - once and for all!

	Input Format:
	The first line contains an integer, t - denoting the number of test cases.

	The next t lines will contain, an integer - n - denoting the number which Jhool gives.

	Output Format:
	You have to print the previous number satisfying the given constraints. If no such previous number exists, print -1.

	Constraints:
	1 <= t <= 100
	1 <= n <= 704977s
*/



#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t, N;
    cin>>t;
    for(int i=0; i<t; i++){
        
        cin>>N;
        int  flag  = 0;
        for(int k = N-1; k > 0; k--){
            int n = k;
            int cubeRoot1, cubeRoot2, count = 0 ;         //, first;
            
            for(int i=n-1, j=1; i>=j; i--, j++){
                cubeRoot1 = round(cbrt(i));
                if(i == (cubeRoot1*cubeRoot1*cubeRoot1)){
                    cubeRoot2 = round(cbrt(j));
                    if(j == (cubeRoot2*cubeRoot2*cubeRoot2)){
                        count++;
                    }
                }
                
                if(count == 2){
                    cout<<n<<endl;
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 1){
                break;
            }
            
        }
        if(flag == 0){
            int first = -1;
            cout<<first<<endl;
        }
        
    }
    
    
    return 0;
}