#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> prefMax(n);
    for(int i=n-1;i>=0;i--){
        prefMax[i]=max(prefMax[i+1],arr[i]);
    }
    for(int i=0;i<n;i++){
        ans=max(prefMax[i]-arr[i],ans);
    }
    cout<<ans<<'\n';
    return 0;
}
