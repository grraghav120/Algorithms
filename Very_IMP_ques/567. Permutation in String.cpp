class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int window=s1.size();
        map<char,int> mp,mp1;
        for(int i=0;i<window;i++) mp[s1[i]]++;
        int i=0,j=0,n=s2.size(),m=mp.size();
        while(j<n){
            mp1[s2[j]]++;
            if(j-i+1==window){
                int c=0;
                for(auto it:mp){
                    if(mp1.find(it.first)!=mp1.end() && mp1[it.first]==it.second){
                        c++;  
                    }
                    else break;
                }
                if(c==m) return true;
                mp1[s2[i]]--;
                i++;
            }
            j++;
        }
        return false;
    }
};