#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v(n),ans(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1]) ans[i]=1;
        else if(v[i]>v[i+1]) ans[i]=0;
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<'\n';
    return 0;
}
