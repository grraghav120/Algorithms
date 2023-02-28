class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& q, vector<string>& w) {
        map<char,int> mpq;
        vector<int> stq(q.size()),stw(w.size()),ans;
        for(int i=0;i<q.size();i++){
            for(auto it:q[i]){
                mpq[it]++;
            }
            auto itr=mpq.begin();
            stq[i]=itr->second;
            mpq.clear();
        }
        for(int i=0;i<w.size();i++){
            for(auto it:w[i]){
                mpq[it]++;
            }
            auto itr=mpq.begin();
            stw[i]=itr->second;
            mpq.clear();
        }
        int m=stw.size();
        sort(stw.begin(),stw.end());
        for(int i=0;i<stq.size();i++){
            auto it=upper_bound(stw.begin(),stw.end(),stq[i])-stw.begin();
            ans.push_back(m-it);
        }
        return ans;
    }
};
