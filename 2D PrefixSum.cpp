#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<vector<char>> ans(n ,vector<char> (n,'.'));
    vector<vector<int>> pref(n+1,vector<int> (n+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ans[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ans[i][j]=='*') pref[i+1][j+1]++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            pref[i][j]=pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+pref[i][j]; //Important Bro!!
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=n;j++){
    //         cout<<pref[i+1][j+1]<<" ";
    //     }
    //     cout<<'\n';
    // }
    while(q--){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans=pref[x2][y2]-pref[x1-1][y2]-pref[x2][y1-1]+pref[x1-1][y1-1]; //Important Bro!!
        cout<<ans<<'\n';
    }
    
    return 0;
}
