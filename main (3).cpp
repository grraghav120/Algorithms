/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Dijkstra_Algo(vector<pair<int,int>> graph,int vertices,int edges,int source){
    vector<int> dis(vertices,INT_MAX),vis(vertices,0);
    priority_queue<int,vector<int>,greater<int>> Q;
    for(in)
    dis[source]=0;
    while(Q.size()!=0){
        int u=Q.front();
        Q.pop();
        vis[u]=1;
        for(auto it:)
    }
}

int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    vector<pair<int,int>> graph[vertices];
    while(edges--){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        graph[v1].push_back({v2,w});
    }
    Dijkstra_Algo(graph,vertices,edges,0);
    return 0;
}
