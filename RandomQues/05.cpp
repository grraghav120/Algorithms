#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;cin>>t;
    // while(t--){
    int n,c=0;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        if(find(v.begin(),v.end(),v[i]/2)!=v.end()) c++;
    }
    cout<<c<<'\n';
    // }
    return 0;
}
