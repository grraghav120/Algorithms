class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int n=nums.size();
        int low=0,high=n-1,mid;
        //First Occurance
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                high=mid-1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        //Second Occurance
        low=0,high=n-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                low=mid+1;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return ans;
    }
};
