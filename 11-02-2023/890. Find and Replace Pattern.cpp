class Solution {
public:
    // bool check(vector<int>&v1,vector<int>&v2){
    //     if(v1==v2) return true;
    //     return false;
    // }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        map<char,vector<int>> mp;
        for(int i=0;i<pattern.size();i++) mp[pattern[i]].push_back(i);
        for(int i=0;i<words.size();i++){
            string f=words[i];
            if(f.size()==pattern.size()){
                map<char,vector<int>> mp_f;
                for(int j=0;j<f.size();j++){
                    mp_f[f[j]].push_back(j);
                }
                bool hai=true;
                for(int j=0;j<mp.size();j++){
                    if(mp_f[f[j]]!=mp[pattern[j]]){hai=false;break;}
                }
                if(hai) ans.push_back(f);
            }
        }
        return ans;
    }
};