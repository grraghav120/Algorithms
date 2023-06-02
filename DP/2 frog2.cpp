#include <bits/stdc++.h>
using namespace std;

int dp[10+1];

int func(int n,vector<int>& h,int k){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int size=0;
    if(n>k) size=n-k;
    else size=0;
    int cost=INT_MAX;
    for(int i=n-1;i>=size;i--){
        cost=min(cost,abs(h[n]-h[i])+func(i,h,k));
    }
    dp[n]=cost;
    return dp[n];
}

int main()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<func(--n,v,k)<<'\n';
    // for(int i=0;i<=n;i++) cout<<dp[i]<<" ";
    return 0;
}
