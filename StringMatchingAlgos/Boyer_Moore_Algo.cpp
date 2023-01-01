// Boyer-Moore Algorithm Implementation
// By Raghav Garg (grraghav120)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t,p;
    cin>>t>>p;
    int n=t.size(),m=p.size(),i,j,var;
    vector<char> v;
    vector<pair<char,int>> last;
    for(i=m-1;i>=0;i--){
        if(find(v.begin(),v.end(),p[i])==v.end()) {
            v.push_back(p[i]);
            last.push_back({p[i],i});
        }
    }
    i=m-1;j=m-1;
    while(i<=n-1){
        if(t[i]==p[j]){   //if we get the element same means hit the same character in both string then simply i-- and j-- to check next one
            if(j==0){
                cout<<i<<'\n';
                return 0;
            }
            else {i--;j--;}
        }
        else{     // if this is not then we got to the according to last of T[i] so here is formula simply i=i+m-min(j,1+last[t[i]]) but seems tought for Implementation
            if(find(v.begin(),v.end(),t[i])==v.end()) var=-1;
            else var=last[t[i]].second;
            i=i+m-min(j,1+var);
            j=m-1;
        }
    }
    cout<<-1<<'\n';
    return 0;
}
