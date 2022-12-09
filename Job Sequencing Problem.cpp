#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
int main()
{
    int n,profit=0;cin>>n;
    vector<int> d(n),p(n),ans(n,-1);
    for(int i=0;i<n;i++) cin>>d[i];
    for(int i=0;i<n;i++) cin>>p[i];
    priority_queue<pp> maxi;
    for(int i=0;i<n;i++) maxi.push({p[i],d[i]});
    while(!maxi.empty()){
        auto it=maxi.top();
        maxi.pop();
        if(ans[it.second-1]==-1) ans[it.second-1]=it.first;
    }
    for(int i=0;i<n;i++) if(ans[i]!=-1) profit+=ans[i];
    cout<<profit<<'\n';
    return 0;
}

