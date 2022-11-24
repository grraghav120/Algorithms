#include <bits/stdc++.h>
using namespace std;

void Hamiltonian_Cycle(int vertices,int edges,vector<vector<int>> adj){
    
}

int main()
{
    int vertices,edges;cin>>vertices>>edges;
    vector<vector<int>> adj(edges,vector<int>(2,0));
    for(int i=0;i<edges;i++) for(int j=0;j<2;j++) cin>>adj[i][j];
    Hamiltonian_Cycle(vertices,edges,adj);
    return 0;
}
