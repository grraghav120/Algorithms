#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;cin>>n;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
    }
    for(auto &it:s) sum+=it;
    cout<<sum<<'\n';
    return 0;
}
