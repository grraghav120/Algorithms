#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int n,vector<vector<int>> &a){
    long long int rowp=1,colp=1,i,sum;
    long long int mid=n/2;
    for( i=0;i<n;i++){
        rowp*=a[mid][i];
        colp*=a[i][mid];
    }
    sum=rowp+colp;
    rowp=0;
    for(i=sum;i>0;i/=10){
        int mod=i%10;
        rowp=rowp*10+mod;
    }
    return rowp;
}

int main()
{
    int n;cin>>n;
    vector<vector<int>> a(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<func(n,a)<<'\n';
    return 0;
}
