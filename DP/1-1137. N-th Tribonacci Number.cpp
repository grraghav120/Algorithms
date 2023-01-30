unordered_map<int,int> mp;
class Solution {
public:
    int tribonacci(int n) {
        mp[0]=0;
        mp[1]=1;
        mp[2]=1;
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        n-=3;
        if(mp.find(n)!=mp.end() && mp.find(n+1)!=mp.end() && mp.find(n+2)!=mp.end()) {
            mp[n+3]=mp[n]+mp[n+1]+mp[n+2];
            return mp[n+3];
        }
        return tribonacci(n)+tribonacci(n+1)+tribonacci(n+2);
    }
};