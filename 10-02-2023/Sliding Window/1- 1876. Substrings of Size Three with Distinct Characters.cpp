class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans=0,i=0,j=0,n=s.size();
        map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            if(mp.size()==3 && j-i+1==3){
                ans++;
            }
            if(j-i+1==3){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};