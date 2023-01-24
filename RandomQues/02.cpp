#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    for(int i=0;i<s1.size();i++){
        ans+=int(s1[i])-int(s2[i]);
    }
    cout<<ans<<'\n';
    return 0;
}
