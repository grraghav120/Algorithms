#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> dijis(int src,vector<int> adj[],int n){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dis(n+1,INT_MAX);
    pq.push({0,src});
    dis[src]=0;
    while(!pq.empty()){
        int distance=pq.top().first;
        int vertex=pq.top().second;
        pq.pop();
        for(auto it:adj[vertex]){
            if(distance+1<dis[it]){
                dis[it]=distance+1;
                pq.push({distance+1,it});
            }
        }
    }
    return dis;
}

void solution_fucntion(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> edges(n+1),adj[n+1];
        for(int i=0;i<n;i++) cin>>edges[i];
        int c1,c2;cin>>c1>>c2;
        for(int i=0;i<n;i++){
            if(edges[i]!=-1) adj[i].push_back(edges[i]);
        }
        vector<int> firstadj(n+1,INT_MAX),secondadj(n+1,INT_MAX);
        firstadj=dijis(c1,adj,n);
        secondadj=dijis(c2,adj,n);
        int distance=INT_MAX;
        int node=-1;
        for(int i=0;i<n;i++){
            if(firstadj[i]==INT_MAX || secondadj[i]==INT_MAX) continue;
            else if(distance>firstadj[i]+secondadj[i]){
                distance=firstadj[i]+secondadj[i];
                node=i;
            }
        }
        cout<<node<<'\n';
    }
}

int main()
{
    solution_fucntion();
    return 0;
}
