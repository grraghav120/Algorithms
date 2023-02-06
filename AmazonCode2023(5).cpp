#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int> mp;
    for(int i=0;i<n;i++) mp[v[i]]++;
    for(auto it:mp){
        if(it.second==1){
            cout<<-1<<'\n';
            return 0;
        }
        else if(it.second%3==0) ans+=it.second/3;
        else if(it.second%3==1){
            int m=(it.second/3)-1;
            ans+=(m+2);
        }
        else ans+=(it.second/3)+1;
    }
    cout<<ans<<'\n';
    return 0;
}
