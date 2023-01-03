#include <bits/stdc++.h>
using namespace std;

void dfs(int i,int j,vector<vector<int>> &adj,int n,int m){
    if(i<0 || j<0 || i>=n || j>=m) return;
    if(adj[i][j]==0){
        adj[i][j]=-1;
        dfs(i,j+1,adj,n,m);
        dfs(i,j-1,adj,n,m);
        dfs(i+1,j,adj,n,m);
        dfs(i-1,j,adj,n,m);
        
        //According to gfg practice diagonal also and 1 is land so changes accordingly
        
        // dfs(i+1,j+1,adj,n,m);
        // dfs(i-1,j-1,adj,n,m);
        // dfs(i-1,j+1,adj,n,m);
        // dfs(i+1,j-1,adj,n,m);
    }
}

int main()
{
    int n,m,j,i,island=0;
    cin>>n>>m;
    vector<vector<int>> adj(n,vector<int>(m,0));
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>adj[i][j];
        }
    }
    
    // starting dfs from 0,0
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(adj[i][j]==0){
                dfs(i,j,adj,n,m);
                island++;
            }
        }
    }
    cout<<"Number of Islands are "<<island<<'\n';
    return 0;
}
