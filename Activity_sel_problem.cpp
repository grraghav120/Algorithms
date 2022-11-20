#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> s(n),f(n),ans;
    for(int i=1;i<=n;i++) cin>>s[i];
    for(int i=1;i<=n;i++) cin>>f[i];
    ans.push_back(1);
    int i=1;
    for(int j=2;j<=n;j++){
        if(s[j]>=f[i]){
            ans.push_back(j);
            i=j;
        }
    }
    for(auto it: ans) cout<<it<<" ";
    return 0;
}
