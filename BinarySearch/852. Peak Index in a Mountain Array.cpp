class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid-1<0 && mid+1<n){
                if(arr[mid]>arr[mid+1]) return mid;
                else if(arr[mid]<arr[mid+1]) low=mid+1;
                else high=mid-1;
            }
            else{
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) low=mid+1;
            else high=mid-1;}
        }
        return -1;
    }
};
