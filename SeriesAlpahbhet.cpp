#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans="";cin>>s;
    int count=1,n=s.size();
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(s[i]!=s[i-1]) count=1;
            ans+=s[i];
            ans+=to_string(count);
        }
        else if(s[i]!=s[i+1]){
            ans+=s[i];
            ans+=to_string(count);
            count=1;
        }
        else count++;
    }
    cout<<ans<<'\n';
    return 0;
}
