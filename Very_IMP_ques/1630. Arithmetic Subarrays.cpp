class Solution {
public:
    bool isArithmetic(vector<int> &nums, int l,int r){
        vector<int> ans;
        for(int i=l;i<=r;i++) ans.push_back(nums[i]);
        sort(ans.begin(),ans.end());
        int d=ans[1]-ans[0];
        for(int i=1;i<ans.size()-1;i++){
            if(ans[i+1]-ans[i]!=d) return false;
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            bool a=isArithmetic(nums,l[i],r[i]);
            ans.push_back(a);
        }
        return ans;
    }
};
