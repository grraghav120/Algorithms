#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int k;cin>>k;
    vector<int> first;
    for(int i=0;i<k;i++) first.push_back(v[i]);
    sort(first.begin(),first.end());
    for(int i=k;i<n;i++) first.push_back(v[i]);
    for(int i=0;i<first.size();i++) cout<<first[i]<<" ";
    return 0;
}
