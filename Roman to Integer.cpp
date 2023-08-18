class Solution {
public:
    int romanToInt(string s) {
        int n=s.size(),sum=0,val=0;
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        for(int i=n-1;i>=0;i--){
            if(mp[s[i]]<val){
                sum-=mp[s[i]];
            }
            else sum+=mp[s[i]];
            val=mp[s[i]];
        }
        return sum;
    }
};
