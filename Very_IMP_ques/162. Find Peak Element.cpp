class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(),low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            bool greaterThanPrevious=(mid==0 || nums[mid]>nums[mid-1]);
            bool greaterThanNext=(mid==n-1 || nums[mid]>nums[mid+1]);
            if(greaterThanPrevious && greaterThanNext) return mid;
            else if(greaterThanPrevious && !greaterThanNext) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};