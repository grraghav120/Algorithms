class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //Same as Previous Pemutation in String SO use map and Sliding Window
        vector<int> ans;
        map<char,int> mp,mp1;
        for(auto &it:p) mp[it]++;
        int i=0,j=0,n=s.size(),window=p.size(),x=mp.size();
        while(j<n){
            mp1[s[j]]++;
            if(j-i+1==window){
                int c=0;
                for(auto it:mp){
                    if(mp1.find(it.first)!=mp.end() && mp1[it.first]==it.second){
                        c++;
                    }
                    else break;
                }
                if(c==x) ans.push_back(i);
                mp1[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};