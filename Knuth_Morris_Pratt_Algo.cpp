// Knuth Morris Pratt Algorithm Implementation
// By Raghav Garg (grraghav120)

#include <bits/stdc++.h>
using namespace std;
vector<char> P(10e5+1);
vector<int> f(10e5+1);

void Compute_Prefix_function(string p,int m){
    int q,k=0;
    for(q=0;q<=m;q++){
        P[q+1]=p[q];
    }
    f[0]=f[1]=0;
    for(q=2;q<=m;q++){
        while(k>0 && P[k+1]!=P[q]) k=f[k];
        if(P[k+1]==P[q]) k++;
        f[q]=k;
    }
}

int KMP_Matcher(string T,string p,int n,int m){
    int q=0;
    Compute_Prefix_function(p,m);
    for(int i=0;i<n;i++){
        while(q>0 && P[q+1]!=T[i]) q=f[q+1];
        if(P[q+1]==T[i]) q++;
        if(q==m){
            return i-m+1;
        }
    }
    return -1;
}

int main()
{
    string t,p;
    cin>>t>>p;
    int n=t.size(),m=p.size();
    int ans=KMP_Matcher(t,p,n,m);
    cout<<ans<<'\n';
    return 0;
}