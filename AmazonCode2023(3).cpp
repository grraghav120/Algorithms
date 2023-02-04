#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sword,rword;
    cin>>sword>>rword;
    int i=0,j=0;
    for(int i=0;i<sword.size();i++){
        if(sword[i]==rword[j]){
            j++;
        }
    }
    cout<<rword.size()-j;
    return 0;
}
