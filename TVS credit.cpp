#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n),ans;
    for(int i=0;i<n;i++) cin>>v[i];
    unordered_map<int,int> mp;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) mp[v[i]]++;
    for(int i=0;i<n/2;i++){
        int triple=3*v[i];
        if(mp.find(triple)!=mp.end()){
            mp[v[i]]--;
            mp[triple]--;
            if(mp[v[i]]==0) mp.erase(v[i]);
            if(mp[triple]==0) mp.erase(triple);
            ans.push_back(v[i]);
        }
        else{
            cout<<-1<<'\n';
            return 0;
        }
    }
    for(auto it:ans) cout<<it<<" ";
    return 0;
}