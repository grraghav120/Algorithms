class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans(n,0),dp(n);
        for(int i=0;i<n;i++) dp[i]=boxes[i]-'0';
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(dp[j]==1) ans[i]+=abs(j-i);
            }
            for(int k=i+1;k<n;k++){
                if(dp[k]==1) ans[i]+=abs(k-i);
            }
        }
        return ans;
    }
};
