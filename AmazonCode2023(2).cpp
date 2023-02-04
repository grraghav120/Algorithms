#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;cin>>s>>t;
    int ans=INT_MAX;
    map<char,int> mp_s,mp_t;
    for(auto it:s) mp_s[it]++;
    for(auto it:t) mp_t[it]++;
    for(auto it:mp_t){
        if(mp_s.find(it.first)!=mp_s.end()){
            ans=min(ans,mp_s[it.first]);
            // break;
        }
        else{
            ans=0;
            break;
        }
    }
    // cout<<mp_t[0]<<'\n';
    // for(auto it:mp_s) cout<<it.first<<" "<<it.second<<'\n';
    cout<<ans<<'\n';
    return 0;
}
