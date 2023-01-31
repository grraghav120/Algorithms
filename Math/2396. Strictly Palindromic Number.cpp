class Solution {
public:
    string Base(int b,int n){
        string ans="";
        while(n>0){
            ans+=n%b;
            n/=b;
        }
        return ans;
    }
    bool isPalin(string s){
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        for(int b=2;b<=n-2;b++){
            string baseString=Base(b,n);
            if(!isPalin(baseString)) return false;
        }
        return true;
    }
};