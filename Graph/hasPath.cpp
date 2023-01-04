#include <bits/stdc++.h>
using namespace std;

void printAdjacencyList(int vertices,vector<int> adj[]){
    for(int i=0;i<vertices;i++){
        cout<<"Vertex "<<i<<" -> ";
        for(auto child:adj[i]) cout<<child<<" ";
        cout<<'\n';
    }
}

bool dfs(int src,vector<bool> &vis,vector<int> adj[],int destination){
    if(src==destination) return true;
    if(!vis[src]){
        vis[src]=true;
        for(auto child:adj[src]){
            bool ans=dfs(child,vis,adj,destination);
            if(ans) return true;
        }
    }
    return false;
}

bool hasPath(int vertices,vector<int> adj[],vector<bool> &vis,int src,int destination){
    bool ans=dfs(src,vis,adj,destination);
    if(ans) return true;
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
    int src,destination;
    cin>>src>>destination;
    printAdjacencyList(vertices,adj);
    if(hasPath(vertices,adj,vis,src,destination)) cout<<"Yes, there is a path"<<'\n';
    else cout<<"NO, there is no path exist"<<'\n';
    return 0;
}



//T1 
// 7 7
// 0 1
// 0 3
// 1 2
// 2 3
// 4 5
// 5 6
// 4 6
// 4 6
//Path exist

// Logic :- start dfs from the src vertex and check wheather the destination is occur in dfs or not if occur then return true else return false .. !!!easy../////
// Raghav Garg (grraghav120)

// 7 8
// 0 1
// 0 3
// 1 2
// 2 3
// 3 4
// 4 5
// 5 6
// 4 6
// 0
// 6