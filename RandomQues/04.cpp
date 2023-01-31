#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int myCode(int a,int b){
    int c=0;
    if(a>b) return -1;
    while(true){
        if(a==b) break;
        if(a>b){
            c+=(a-b);
            break;
        }
        a*=2;
        c++;
    }
    return c;
}

int main()
{
    int a,b;cin>>a>>b;
    cout<<(myCode(a,b)<<'\n';
    return 0;
}
