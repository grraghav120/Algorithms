class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>> maxi;
        for(int i=0;i<boxTypes.size();i++) maxi.push({boxTypes[i][1],boxTypes[i][0]});
        int ans=0;
        while(truckSize>0 && !maxi.empty()){
            auto it=maxi.top();
            if(it.second<=truckSize) ans+=(it.first*(it.second));
            else ans+=(it.first*(truckSize));
            truckSize-=(it.second);
            maxi.pop();
        }
        return ans;
    }
};
