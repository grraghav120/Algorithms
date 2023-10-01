#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    vector<int> arr(n),a;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==x) a.push_back(i+1);
    }
    int q;
    cin>>q;
    vector<int> ans;
    for(int i=0;i<q;i++){
        int p;
        cin>>p;
        if(p>a.size()) ans.push_back(-1);
        else{
            ans.push_back(a[p-1]);
        }
    }
    for(int i=0;i<q;i++) cout<<ans[i]<<" ";
    return 0;
}