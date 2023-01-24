#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int ans=0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(pow(v[i],2)+pow(v[j],2)==pow(v[k],2)){
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<'\n';
                    cout<<"YES"<<'\n';
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<'\n';
    return 0;
}
