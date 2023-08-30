#include <bits/stdc++.h>
using namespace std;
int main(){
    // get all the prime factors of n from 1 to n in O(sqrt(n));
    int n;cin>>n; // get prime factors of n=36
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if((n/i)!=i) cout<<(n/i)<<" ";
        }
    }
    return 0;
}