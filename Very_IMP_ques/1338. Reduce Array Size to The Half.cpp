class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size(),ans=0,resSize=n;
        map<int,int> mp;
        for(auto it:arr) mp[it]++;
        vector<pair<int,int>> v;
        for(auto it:mp) v.push_back({it.second,it.first});
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(int i=0;resSize>n/2 && i<v.size();++i){
            int a=v[i].first;
            ans++;
            resSize-=a;
        }
        return ans;
    }
};
