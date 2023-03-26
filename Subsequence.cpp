//Subsequence calculae using Bit Manupilation or Bit masking

//O((2n-1)*n)
// all subsequence jo hote hai vo 2^n-1 aate hai

// 2^n is easily calculated as (1<<n)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)) cout<<arr[j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
