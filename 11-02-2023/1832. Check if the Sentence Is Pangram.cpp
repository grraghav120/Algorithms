class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        if(mp.size()==26) return true;
        return false;
    }
};