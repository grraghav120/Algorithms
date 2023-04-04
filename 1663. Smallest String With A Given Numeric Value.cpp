class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans="";
        if(n==1){
            ans=(96+k);
            return ans;
        }
        for(int i=0;i<n;i++){
            ans+='a';
        }
        k-=(n-1);
        if(k<=0) return ans;
        n--;
        cout<<k<<'\n';
        while(n>=0){
            if(k<=26){
                ans[n]=(96+k);
                break;
            }
            ans[n]='z';
            k-=26;
            n--;
            k+=1;
        }
        return ans;
    }
};
