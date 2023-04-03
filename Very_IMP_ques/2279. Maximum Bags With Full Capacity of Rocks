class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=rocks.size(),res=0;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=capacity[i]-rocks[i];
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(additionalRocks<=0) break;
            if(ans[i]==0) res++;
            else{
                if(ans[i]<=additionalRocks){
                    res++;
                    additionalRocks-=ans[i];
                }
            }
        }
        return res;
    }
};
