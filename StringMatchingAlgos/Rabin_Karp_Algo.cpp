// Rabin Karp Algorithm Implementation
// By Raghav Garg (grraghav120)

#include <bits/stdc++.h>
using namespace std;

int Rabin_Karp_Algo(string T,string P,int n,int m,int q){
    int hashcodeForT=0;
    int hashcodeForP=0;
    int i,j;
    for(i=0;i<m;i++){
        hashcodeForP+=((int)P[i]*pow(10,m-i-1));
        hashcodeForT+=((int)T[i]*pow(10,m-i-1));
    }
    for(i=0;i<=n-m+1;i++){
        if(hashcodeForP==hashcodeForT){
            for(j=0;j<m;j++){
                if(T[i+j]!=P[j]) break;
            }
            if(j==m) return i;
        }
        else{
            hashcodeForT=((hashcodeForT-(int)T[i]*pow(10,m-1))*10)+(int)T[i+m];
            if(hashcodeForT<0) hashcodeForT+=q;
        }
    }
    return -1;
}

int main()
{
    string t,p;
    cin>>t>>p;
    int n=t.size(),m=p.size(),q=INT_MAX;
    int ans=Rabin_Karp_Algo(t,p,n,m,q);
    cout<<ans<<'\n';
    return 0;
}