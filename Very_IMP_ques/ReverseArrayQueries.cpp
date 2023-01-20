#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int op;cin>>op;
    vector<vector<int>> operations(op,vector<int> (2,0));
    for(int i=0;i<op;i++){
        int x1,x2;cin>>x1>>x2;
        operations[i][0]=x1;
        operations[i][1]=x2;
    }
    for(int i=0;i<op;i++){
        reverse(v.begin()+operations[i][0],v.begin()+(operations[i][1]+1));
    }
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}

//Raghav Garg