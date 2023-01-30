//Same Pattern Bro Use Memorization whenever we get the new number we calculate it and store it in table and if it is present then use that for efficiency and less calculation to reduce time complexity BRO!!!

unordered_map<int,int> mp;
class Solution {
public:
    int fib(int n) {
        mp[0]=0;
        mp[1]=1;
        if(n==0) return 0;
        if(n==1) return 1;
        if(mp.find(n-1)!=mp.end() && mp.find(n-2)!=mp.end()){
            mp[n]=mp[n-1]+mp[n-2];
            return mp[n];
        }
        return fib(n-1)+fib(n-2);
    }
};