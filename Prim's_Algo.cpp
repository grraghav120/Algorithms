#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> graph[100000+7];

void Prims_Algo(int vertices,int edges,int min_weight,int k,int l){
    vector<vector<int>> t((vertices-1),vector<int>(2,0));
    t[0][1]=k;
    t[0][2]=l;
    vector<int> near(vertices,0);
    for(int i=0;i<vertices;i++){
        near[i]=i;
    }
    near[l]=k;
    int near_weight[vertices];
    memset(near_weight,INT_MAX,sizeof(near_weight));
    near_weight[k]=0;
    for(int i=0;i<vertices;i++){
        int min_v=INT_MAX,min_index;
        for(int j=0;j<vertices;j++){
            if(near[j]!=-1 && near_weight[j]<min_v){
                min_v=near_weight[j];
                min_index=j;
            }
        }
        if(min_index!=l){
            t[i][1]=near[min_index];
            t[i][2]=min_index;
        }
        near[min_index]=-1;
        for(int j=0;j<vertices;j++){
            if(near[j]!=-1 && graph[min_index][j].second<near_weight[j]){
                near[j]=min_index;
                near_weight[j]=graph[min_index][j].second;
            }
        }
    }
    // Print the minimum spanning tree
    cout<<"Minimum Spanning Tree: "<<endl;
    for(int i=0;i<vertices-1;i++){
        cout<<t[i][1]<<" "<<t[i][2]<<endl;
    }
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
