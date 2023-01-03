#include <bits/stdc++.h>
using namespace std;

void printAdjacencyList(int vertices,vector<int> adj[]){
    cout<<"Printing Adjacency list of Undirected Graph "<<'\n';
    for(int i=0;i<vertices;i++){
        cout<<"vertex "<<i<<" -> ";
        for(auto it:adj[i]) cout<<it<<" ";
        cout<<'\n';
    }
}

void dfs(int src,vector<int> &current_cc,vector<int> adj[],vector<bool> &vis){
    if(!vis[src]){
        vis[src]=1;
        current_cc.push_back(src);
        for(auto it:adj[src]) dfs(it,current_cc,adj,vis);
    }
}

int main()
{
    int vertices,edges,cmp=0;
    cin>>vertices>>edges;
    vector<int> adj[vertices];
    vector<bool> vis(vertices);
    while(edges--){
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    vector<vector<int>> comp;
    printAdjacencyList(vertices,adj);
    for(int i=0;i<vertices;i++) {
        if(!vis[i]){
            vector<int> current_cc;
            dfs(i,current_cc,adj,vis);
            // cmp++;
            comp.push_back(current_cc);
        }
    }
    for(auto it:comp){
        cout<<"[";
        for(auto itr:it) cout<<itr<<" ";
        cout<<"]";
        cout<<'\n';
    }
    return 0;
}