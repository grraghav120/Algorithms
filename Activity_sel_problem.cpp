#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;cin>>n;
    vector<int> s(n),f(n),ans;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) cin>>f[i];
    i=0;
    ans.push_back(0);
    for(int j=1;j<n;j++){
        if(s[j]>=f[i]){
            ans.push_back(j);
            i=j;
        }
    }
    for(auto it: ans) cout<<(it)<<" ";
    return 0;
}
