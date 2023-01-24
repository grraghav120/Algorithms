#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factors(int n){
    int i,sum=0;
    for(i=1;i<=n;i++) if(n%i==0) sum+=i;
    return sum;
}

int main()
{
    int n,m;cin>>n>>m;
    long long int ans=n*m;
    long long int sum=n+m;
    ans=abs(ans-sum);
    ans=factors(ans);
    cout<<ans<<'\n';
    return 0;
}
