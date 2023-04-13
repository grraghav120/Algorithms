#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    try {
        int aa=stoi(S);
        cout<<aa<<'\n';
    } catch (invalid_argument) {
        cout<<"Bad String"<<'\n';
    }
    return 0;
}
