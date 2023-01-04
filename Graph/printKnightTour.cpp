#include <bits/stdc++.h>
using namespace std;

void printTour(vector<vector<int>> &chess,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<chess[i][j]<<" ";
        }
        cout<<'\n';
    }
}

void dfs(int n,int x,int y,vector<vector<int>> &chess,int move){
    if(x>=n || y>=n || x<0 || y<0 || chess[x][y]>0) return;
    else if(move==n*n){
        chess[x][y]=move;
        printTour(chess,n);
        chess[x][y]=0;
        return;
    }
    chess[x][y]=move;
    // All knight tour in all 8 directions...
    dfs(n,x-2,y+1,chess,move+1);  //1
    dfs(n,x-1,y+2,chess,move+1);  //2
    dfs(n,x+1,y+2,chess,move+1);  //3
    dfs(n,x+2,y+1,chess,move+1);  //4
    dfs(n,x+2,y-1,chess,move+1);  //5
    dfs(n,x+1,y-2,chess,move+1);  //6
    dfs(n,x-1,y-2,chess,move+1);  //7
    dfs(n,x-2,y-1,chess,move+1);  //8
    chess[x][y]=0;
}

void knightTour(int n,int x,int y,vector<vector<int>> &chess){
    dfs(n,x,y,chess,1);
}

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<vector<int>> chess(n,vector<int> (n,-1));
    knightTour(n,x,y,chess);
    return 0;
}


//Raghav Garg