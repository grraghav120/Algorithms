class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>> ans;
        int n=g.size();
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[g[i]]++;
        for(auto it:mp){
            vector<int> v;
            for(int i=0;i<n;i++){
                if(g[i]==it.first){
                    v.push_back(i);
                }
                if(v.size()==it.first){
                    ans.push_back(v);
                    v.clear();
                }
            }
        }
        return ans;
    }
};
