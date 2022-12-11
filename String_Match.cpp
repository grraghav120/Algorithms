
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;cin>>s;
    string rev=s;
    int c=0;
    reverse(rev.begin(),rev.end());
    for(int i=0;i<s.size();i++) if(s[i]==rev[i]) c++;
    cout<<c<<'\n';
    return 0;
}
