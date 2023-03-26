#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum=0,ans=INT_MAX,totalSum=0,diff=0;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        totalSum+=x;
        arr[i]=x;
    }
    //for only the small constraints not even 21 just for 20 so complexity++ 
    for(int i=0;i<(1<<n)-1;i++){
        sum=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                sum+=arr[j];
            }
        }
        diff=totalSum-sum;
        ans=min(ans,abs(diff-sum));
    }
    cout<<ans<<'\n';
    return 0;
}
