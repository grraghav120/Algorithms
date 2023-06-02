#include <bits/stdc++.h>
using namespace std;

int dp[10+1];

int func(int n,vector<int>& h){
    if(n==0) return 0;
    if(n==1){
        dp[n]=abs(h[n]-h[n-1]);
        return dp[n];
    }
    if(dp[n]!=-1) return dp[n];
    return dp[n]=min(abs(h[n]-h[n-2])+func(n-2,h),abs(h[n]-h[n-1])+func(n-1,h));
}

int main()
{
    int n;cin>>n;
    vector<int> v(n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<func(--n,v)<<'\n';
    return 0;
}
