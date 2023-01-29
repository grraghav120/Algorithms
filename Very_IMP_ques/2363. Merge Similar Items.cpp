class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> mp;
        for(int i=0;i<items1.size();i++) mp[items1[i][0]]=items1[i][1];
        for(int i=0;i<items2.size();i++){
            if(mp.find(items2[i][0])!=mp.end()){
                mp[items2[i][0]]+=items2[i][1];
            }
            else {
                mp[items2[i][0]]=items2[i][1];
            }
        }
        int m=mp.size();
        vector<vector<int>> ans;
        for(auto it:mp){
            vector<int> m;
            m.push_back(it.first);
            m.push_back(it.second);
            ans.push_back(m);
        }
        return ans;
    }
};
