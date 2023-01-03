#include <bits/stdc++.h>
using namespace std;

void printAdjacencyList(int vertices,vector<int> adj[]){
    for(int i=0;i<vertices;i++){
        cout<<"Vertex "<<i<<" -> ";
        for(auto child:adj[i]) cout<<child<<" ";
        cout<<'\n';
    }
}

void dfs(int src,vector<int> adj[],vector<bool> &vis,vector<int> &cmp){
    if(!vis[src]){
        vis[src]=true;
        cmp.push_back(src);
        for(auto child:adj[src]){
            dfs(child,adj,vis,cmp);
        }
    }
}

int perfectFriend(int vertices,vector<int> adj[],vector<bool> &vis){
    vector<vector<int>> comp;
    for(int i=0;i<vertices;i++){
        if(!vis[i]){
            vector<int> cmp;
            dfs(i,adj,vis,cmp);
            comp.push_back(cmp);
        }
    }
    int pairs=0;
    for(int i=0;i<comp.size()-1;i++){
        for(int j=i+1;j<comp.size();j++){
            pairs+=(comp[i].size()*comp[j].size());
        }
    }
    return pairs;
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
    int ans=perfectFriend(vertices,adj,vis);
    cout<<ans<<'\n';
    return 0;
}
