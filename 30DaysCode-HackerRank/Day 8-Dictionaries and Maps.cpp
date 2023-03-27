#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    unordered_map<string,string> mp;
    while(n--){
        string s1,s2;
        cin>>s1>>s2;
        mp[s1]=s2;
    }
    string name;
    while(cin>>name){
        if(mp.find(name)==mp.end()){
            cout<<"Not found"<<'\n';
        }
        else{
            cout<<name<<"="<<mp[name]<<'\n';
        }
    }
    return 0;
}
