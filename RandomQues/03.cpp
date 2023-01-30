#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int myCode(string s){
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='R' || s[i]=='Q') c++;
        else if(s[i]=='B') c+=2;
    }
    return c;
}

int main()
{
    string s;cin>>s;
    cout<<myCode(s)<<'\n';
    return 0;
}
