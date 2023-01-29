#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cin>>k;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==k){
                cout<<i<<" "<<j<<'\n';
                break;
            }
        }
    }
    return 0;
}
