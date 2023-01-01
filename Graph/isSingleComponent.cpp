#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100000];
bool vis[100000];

void printAdjacencyList(int vertices){
    cout<<"Printing Adjacency list of Undirected Graph "<<'\n';
    for(int i=0;i<vertices;i++){
        cout<<"vertex "<<i<<" -> ";
        for(auto it:adj[i]) cout<<it<<" ";
        cout<<'\n';
    }
}

void dfs(int src){
    if(!vis[src]){
        vis[src]=1;
        for(auto it:adj[src]) dfs(it);
    }
}

int main()
{
    int vertices,edges,cmp=0;
    cin>>vertices>>edges;
    while(edges--){
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    printAdjacencyList(vertices);
    for(int i=0;i<vertices;i++) if(!vis[i]){ dfs(i); cmp++; }
    cout<<cmp<<'\n'; //Optional Bro
    if(cmp==1) cout<<"Single Connected Component"<<'\n';
    else cout<<"Not a Single Connected Component"<<'\n';
    return 0;
}