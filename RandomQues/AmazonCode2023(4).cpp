#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cin>>k;
    int i=0,j=0,ans=0,sum=0,c;
    map<int,int> mp;
    while(j<n){
        mp[v[j]]++;
        sum+=v[j];
        if(j-i+1==k){
            c=0;
            for(auto it:mp) if(it.second!=0) c++;
            if(c==k) ans=max(ans,sum);
            mp[v[i]]--;
            sum-=v[i];
            i++;
        }
        j++;
    }
    cout<<ans<<'\n';
    return 0;
}
