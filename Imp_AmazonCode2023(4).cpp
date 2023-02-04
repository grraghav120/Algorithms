#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    vector<int> loc(n);
    for(int i=0;i<n;i++) cin>>loc[i];
    cin>>m;
    vector<int> mov_to(m),mov_fr(m);
    for(int i=0;i<m;i++) cin>>mov_fr[i];
    cin>>m;
    for(int i=0;i<m;i++) cin>>mov_to[i];
    set<int> s;
    for(int i=0;i<n;i++) s.insert(loc[i]);
    for(int i=0;i<m;i++){
        s.erase(mov_fr[i]);
        s.insert(mov_to[i]);
    }
    loc.clear();
    for(auto &it:s) loc.push_back(it);
    for(auto it:loc) cout<<it<<" ";
    return 0;
}
