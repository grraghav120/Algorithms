
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int k=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++){
            cout<<" ";
        }
        k--;
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<'\n';
    }
    return 0;
}




// Output

  1
 2 2
3 3 3

 1
2 2

   1
  2 2
 3 3 3
4 4 4 4



  
