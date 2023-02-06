class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size(),i=0,j=n;
        vector<int> ans;
        while(j<2*n){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};