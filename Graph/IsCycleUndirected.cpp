// GFG Passed Solution
// Please Like Repository
// Contributed by Raghav Garg


#include <bits/stdc++.h>
using namespace std;

void printAdjacencyList(int vertices,vector<int> adj[]){
    for(int i=0;i<vertices;i++){
        cout<<"Vertex "<<i<<" -> ";
        for(auto child:adj[i]) cout<<child<<" ";
        cout<<'\n';
    }
}

bool dfs(int src,int par,vector<bool> &vis,vector<int> adj[]){
    vis[src]=true;
    for(auto child:adj[src]){
        if(vis[child] && child==par) continue;
        if(vis[child] && child!=par) return true;
        bool ans=dfs(child,src,vis,adj);
        if(ans) return true;
    }
    return false;
}

bool isCycle(int vertices,vector<int> adj[],vector<bool> &vis){
    for(int i=0;i<vertices;i++){
        if(!vis[i]){
            bool ans=dfs(i,-1,vis,adj);
            if(ans) return true;
        }
    }
    return false;
}

int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int> adj[vertices];
    vector<bool> vis(vertices);
    while(edges--){
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    printAdjacencyList(vertices,adj);
    cout<<(isCycle(vertices,adj,vis) ? "YES":"NO")<<'\n';
    return 0;
}
