#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> graph[100000+7];

void Prims_Algo(int vertices,int edges,int min_weight,int k,int l){
    vector<vector<int>> t((vertices-1),vector<int>(2,0));
    t[0][1]=k;
    t[0][2]=l;
    vector<int> near(vertices,0);
    for(int i=0;i<vertices;i++){
    }
    
    // Print Adjacency List
    // for(int i=0;i<vertices;i++){
    //     for(auto it:graph[i]) cout<<it.first<<" "<<it.second<<" ";
    //     cout<<'\n';
    // }
}

int main()
{
    int vertices,edges,source,min_weight=INT_MAX;
    cin>>vertices>>edges;
    while(edges--){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        if(w<min_weight){
            min_weight=w;
            int k=v1;int l=v2;
        }
        graph[v1].push_back({v2,w});
    }
    Prims_Algo(vertices,edges,,min_weight,k,l);
    return 0;
}
