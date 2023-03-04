class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m=s.size(),sr,sc,move=0;
        vector<int> ans(m);
        for(int i=0;i<m;i++){
            sr=startPos[0];
            sc=startPos[1];
            move=0;
            for(int j=i;j<m;j++){
                if(s[j]=='R') sc+=1;
                else if(s[j]=='L') sc-=1;
                else if(s[j]=='U') sr-=1;
                else sr+=1;
                if(sr>=n || sr<0 || sc>=n || sc<0) break;
                else move++;
            }
            ans[i]=move;
        }
        return ans;
    }
};
