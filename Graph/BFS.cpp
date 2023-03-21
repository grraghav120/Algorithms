#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printAdjacency(vector<int> graph[],int vertices){
    for(int i=1;i<=vertices;i++){
        cout<<i<<" -> ";
        for(auto itr:graph[i]){
            cout<<itr<<" ";
        }
        cout<<'\n';
    }
}


void bfs(int src,vector<int> graph[],vector<int> &vis){
    queue<int> qu;
    qu.push(src);
    while(qu.size()){
        int tp=qu.front();
        qu.pop();
        vis[tp]=1;
        for(auto it:graph[tp]){
            if(!vis[it]) qu.push(it);
        }
        cout<<tp<<" ";
    }
    
}

int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int> graph[vertices+1];
    for(int i=0;i<edges;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    vector<int> vis(vertices+1,0);
    printAdjacency(graph,vertices);
    for(int i=1;i<=vertices;i++){
        if(!vis[i]){
            bfs(i,graph,vis);
        }
        cout<<'\n';
    }
    return 0;
}
