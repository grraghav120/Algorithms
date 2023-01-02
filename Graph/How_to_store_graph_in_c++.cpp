#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int> adj[vertices];
    while(edges--){
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);  //Remove this for Directed Graph
    }
    cout<<"Printing Adjacency list of Undirected Graph "<<'\n';
    for(int i=0;i<vertices;i++){
        cout<<"vertex "<<i<<" -> ";
        for(auto it:adj[i]) cout<<it<<" ";
        cout<<'\n';
    }
    return 0;
}
