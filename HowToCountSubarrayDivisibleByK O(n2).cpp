#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,k,count=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=v[j];
            if(sum%k==0) count++;
        }
    }
    cout<<count<<'\n';
    return 0;
}
