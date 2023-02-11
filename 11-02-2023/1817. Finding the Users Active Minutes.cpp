class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> v(k);
        unordered_map<int,set<int>> mp;
        for(int i=0;i<logs.size();i++) mp[logs[i][0]].insert(logs[i][1]);
        unordered_map<int,int> unmp;
        for(auto it:mp) unmp[it.second.size()]++;
        for(auto it:unmp){
            v[it.first-1]=it.second;
        }
        return v;
    }
};