#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;cin>>s;
    ll n=s.size(),i;
    unordered_map<char,int> ump;
    for(i=0;i<n;i++) ump[s[i]]++;
    ll m=ump.size(),j=0,ans=0;
    vector<int> v;
    for(auto it:ump) v.push_back(it.second);
    sort(v.begin(),v.end(),greater<int>());
    while(j<m){
        if(j<9) i=1;
        else if(j>=9 && j<18) i=2;
        else i=3;
        ans+=(v[j]*i);
        j++;
    }
    cout<<ans<<'\n';
    return 0;
}
