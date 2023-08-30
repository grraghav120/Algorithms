#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int maxl,minl,maxc;cin>>minl>>maxl>>maxc;
    int i=0,j=0,ans=INT_MIN,n=s.size();
    unordered_map<char,int> mp;
    while(j<n){
        mp[s[j]]++;
        int len=j-i+1;
        // cout<<len<<" "<<mp.size()<<'\n';
        if(len>maxl || mp.size()>maxc){
            mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);
            i++;
        }
        if(len>=minl && len<=maxl && mp.size()<=maxc){
            ans=max(ans,len);
        }
        j++;
    }
    // for(auto it:mp) cout<<it.first<<" "<<it.second<<'\n';
    cout<<ans<<'\n';
    return 0;
}