class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        map<char,int> mps,mpt;
        for(auto it:s) mps[it]++;
        for(auto it:t) mpt[it]++;
        for(auto it:mpt){
            if(mps.find(it.first)!=mps.end()){
                if(it.second>mps[it.first]) ans+=abs(mps[it.first]-it.second);
            }
            else ans+=it.second;
        }
        return ans;
    }
};