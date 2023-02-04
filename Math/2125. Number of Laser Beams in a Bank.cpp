class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        vector<int> count;
        for(int i=0;i<bank.size();i++){
            int c=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') c++;
            }
            if(c!=0)count.push_back(c);
        }
        if(count.size()<=1) return ans;
        for(int i=0;i<count.size()-1;i++) ans+=count[i]*count[i+1];
        return ans;
    }
};