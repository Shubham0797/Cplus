#include<iostream>
#define N 4
using namespace std;

void printMaze(int maze[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            cout<<maze[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
}

void finalRoute(int maze[N][N], int i, int j){

    if(i==N-1 && j==N-1){
        printMaze(maze);
        return;
    }
    
    if(j+1<N){
        if(maze[i][j+1]==1){
            maze[i][j+1] = 2;
            finalRoute(maze, i, j+1);
            maze[i][j+1] = 1;
        }
    }
    if(i+1<N){
        if(maze[i+1][j] == 1){
            maze[i+1][j] = 2;
            finalRoute(maze, i+1, j);
            maze[i+1][j] = 1;
        }
    }

    
}
int main(){
    int maze[N][N] = { { 1, 0, 0, 0 }, 
                       { 1, 1, 1, 1 }, 
                       { 0, 1, 1, 0 }, 
                       { 1, 1, 1, 1 }
                     };
    maze[0][0] = 2;
    finalRoute(maze, 0, 0);
    return 0;
}