#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;cin>>n>>p;
    vector<int> par(n+1),vis(n+1,0);
    for(int i=0;i<n;i++) cin>>par[i];
    vis[0]=1;
    par.insert(par.begin(),0);
    for(int i=0;i<p;i++){
        int m;cin>>m;
        while(m!=0){
            if(vis[par[m]]==1){vis[m]=1;break;}
            if(m==1) {vis[m]=1;break;}
            m=par[m];
        }
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0)cout<<i<<" ";
    }
    return 0;
}
