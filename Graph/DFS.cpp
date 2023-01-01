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
        cout<<src<<" ";
        for(auto it:adj[src]) dfs(it);
    }
}

int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    while(edges--){
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    printAdjacencyList(vertices);
    for(int i=0;i<vertices;i++) dfs(i);
    return 0;
}


//T1

6 6
0 1
0 2
0 3
1 4
1 5
2 5

//T2
    
7 6
0 1
0 3
0 6
1 2
1 4
4 5

//T3
