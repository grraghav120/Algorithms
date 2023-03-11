#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char,int> real_char; //A-1 B-2 C-3
    map<int,char> rev_char;  //A-26 B-25 C-24
    string s,ans="";
    getline(cin,s);
    char ch='A';
    for(int i=26;i>=1;i--){
        rev_char[i]=ch;
        ch++;
    }
    ch='A';
    for(int i=1;i<=26;i++){
        real_char[ch]=i;
        ch++;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9') ans+=s[i];
        else if(s[i]>='A' && s[i]<='Z'){
            ans+=rev_char[real_char[s[i]]];
        }
        else ans+=s[i];
    }
    cout<<ans<<'\n';
    return 0;
}

// [!img]