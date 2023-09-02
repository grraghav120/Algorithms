#include <bits/stdc++.h>
using namespace std;

void rotateArrayByKPlaces(vector<int>& arr, int k,int n) {
    int i;
    vector<int> temp;
    k=k%n;
    for(i=0;i<k;i++) temp.push_back(arr[i]); //storing
    for(i=k;i<n;i++){ //shifting
        arr[i-k]=arr[i];
    }
    for(i=0;i<k;i++){ //last element handle
        arr[(n-k)+i]=temp[i];
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    // for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    rotateArrayByKPlaces(arr,k,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
