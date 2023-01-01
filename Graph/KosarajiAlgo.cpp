#include <bits/stdc++.h>
using namespace std;

vector<int> adjTranspose[100000];

void printAdjacencyList(vector<int> adj[],int vertices){
    for(int i=0;i<vertices;i++){
        cout<<"Vertex "<<i<<" -> ";
        for(auto itr:adj[i]) cout<<itr<<" ";
        cout<<'\n';
    }
}

void transposeGraph(int vertices,vector<int> adj[]){
    for(int i=0;i<vertices;i++){
        for(auto itr:adj[i]) adjTranspose[itr].push_back(i);
    }
    cout<<"Transpose of Graph \n";
    printAdjacencyList(adjTranspose,vertices);
}

void dfs(int src,vector<bool> &vis,vector<int> adj[]){
    if(!vis[src]){
        vis[src]=true;
        for(auto it:adj[src]) dfs(it,vis,adj);
    }
}

bool kosarajuAlgo(vector<int> adj[],vector<bool> &vis,int vertices){
    
    //Step-1  Visted false
    for(int i=0;i<vertices;i++) vis[i]=false;
    
    //Step-2  DFS for starting Vertex
    dfs(0,vis,adj);
    
    //Step-3  Check wheather the all vertices are traverse or not
    for(int i=0;i<vertices;i++) if(vis[i]==false) return false;
    
    //Step-4  // Visted all false
    for(int i=0;i<vertices;i++) vis[i]=false;
    
    //Step-5  DFS in Transpose graph
    transposeGraph(vertices,adj);
    dfs(0,vis,adjTranspose);
    
    //Step-6 Visted all false vertices
    for(int i=0;i<vertices;i++) if(vis[i]==false) return false;
    
    return true;
}

int main()
{   int vertices,edges;
    cin>>vertices>>edges;
    vector<int> adj[vertices];
    vector<bool> vis(vertices);
    while(edges--){
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2); //bcz it is directed graph
    }
    printAdjacencyList(adj,vertices);
    bool ans=kosarajuAlgo(adj,vis,vertices);
    cout<<ans<<'\n';
    return 0;
}