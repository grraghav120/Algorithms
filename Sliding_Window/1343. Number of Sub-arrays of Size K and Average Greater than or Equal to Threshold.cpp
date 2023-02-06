// Very Important
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size(),i=0,j=0,sum=0,count=0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1==k){
                if(sum/k>=threshold) count++;
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return count;
    }
};