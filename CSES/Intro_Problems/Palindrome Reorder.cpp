// Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

// Input

// The only input line has a string of length n
//  consisting of characters A–Z.

// Output

// Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

// Constraints
// 1≤n≤106

// Example

// Input:
// AAAACACBA

// Output:
// AACABACAA


#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s;cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++) mp[s[i]]++;
    int oddno=0;
    for(auto it:mp){
        if(it.second&1) oddno++;
    }
    if(oddno>1){
        cout<<"NO SOLUTION";
    }
    else{
        string s1="",s2="";
        char index;
        for(auto it:mp){
            if(it.second&1){
                index=it.first;
            }
            else{
                for(int i=0;i<it.second/2;i++) s1+=it.first;
            }
        }
        s2=s1;
        for(int i=0;i<mp[index];i++) s1+=index;
        reverse(s2.begin(),s2.end());
        cout<<s1+s2;
    }
    return 0;
}