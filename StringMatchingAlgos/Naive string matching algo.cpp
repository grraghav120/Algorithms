#include <iostream>

using namespace std;

int main()
{
    string t,p;
    cin>>t>>p;
    int i,j,n=t.size(),m=p.size();
    for(i=0;i<n-m+1;i++){
        j=0;
        while(j<m && t[i+j]==p[j]) j++;
        if(j==m){
            cout<<i;
            return 0;
        }
    }
    cout<<"Not found String";
    return 0;
}
