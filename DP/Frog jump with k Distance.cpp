#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> h(n),dp(n+1,-1);
    for(int i=0;i<n;i++) cin>>h[i];
    if(n==1){
        cout<<0<<'\n';
        return 0;
    }
    dp[0]=0,dp[1]=abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        int minEn=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int l=abs(h[i]-h[i-j])+dp[i-j];
                minEn=min(minEn,l);
            }
        }
        dp[i]=minEn;
    }
    cout<<dp[n-1]<<'\n';
    return 0;
}
