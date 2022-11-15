#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Bellman_ford_algo(vector< pair<pair<int,int>,int> > graph,int vertices,int edges,int source){
    vector<int> dis(vertices,INT_MAX);
    dis[source]=0;
    for(int i=0;i<vertices;i++){
        for(auto it:graph){
            if(dis[it.first.first]+it.second<dis[it.first.second]) dis[it.first.second]=dis[it.first.first]+it.second;
        }
    }
    for(auto it:graph){
        if(dis[it.first.first]+it.second<dis[it.first.second]){
            cout<<"Negative Cycle"<<'\n';
            return;
        }
    }
    for(int i=0;i<dis.size();i++){
        cout<<"Distance from 0 to "<<i<<" is "<<dis[i]<<'\n';
    }
}

int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    vector< pair<pair<int,int>,int> > graph;
    while(edges--){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        graph.push_back({{v1,v2},w});
    }
    Bellman_ford_algo(graph,vertices,edges,0);
    return 0;
}

//Testcase 1

/*

7 10
0 1 6
0 2 5
0 3 5
1 4 -1
2 1 -2
3 2 -2
2 4 1
4 6 3
3 5 -1
5 6 3

*/

//TestCase 2

/*
8 11
0 1 3
0 2 5
0 3 2
1 4 -4
2 5 6
3 6 3
5 2 -3
6 3 -6
4 7 4
5 7 8
6 7 7 
*/

//T3

/*
8 11
0 1 3
0 2 5
0 3 2
1 4 -4
2 5 6
3 6 3
5 2 -3
6 3 -6
4 7 4
5 7 8
6 7 7 

*/
