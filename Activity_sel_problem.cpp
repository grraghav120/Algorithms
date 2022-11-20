#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;cin>>n;
    vector<int> s(n),f(n),ans;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) cin>>f[i];
    i=0;
    ans.push_back(0);
    for(int j=1;j<n;j++){
        if(s[j]>=f[i]){
            ans.push_back(j);
            i=j;
        }
    }
    for(auto it: ans) cout<<(it)<<" ";
    return 0;
}

// When already sorted arrays

// but when not sorted complexity will be O(nlogn)

// Algo:-


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;cin>>n;
    vector<int> s(n),f(n);
    vector< pair<int,int> > ans;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mini;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) cin>>f[i];
    for(int i=0;i<n;i++){
        mini.push({f[i],s[i]});
    }
    auto it=mini.top();
    ans.push_back({it.second,it.first});
    mini.pop();
    while(!mini.empty()){
        auto itr=mini.top();
        if(itr.second>=it.first){
            it=itr;
            ans.push_back({itr.second,itr.first});
        }
        mini.pop();
    }
    for(auto it: ans) cout<<(it.first)<<" "<<it.second<<" "<<'\n';
    return 0;
}
