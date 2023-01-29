class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        priority_queue<pair<int,int>> maxi;
        for(int i=0;i<plantTime.size();i++) maxi.push({growTime[i],plantTime[i]});
        int days=-1,flower=0,maxii=INT_MIN;
        while(!maxi.empty()){
            auto it=maxi.top();
            days+=(it.second);
            flower=days;
            flower+=(it.first)+1;
            maxii=max(flower,maxii);
            maxi.pop();
        }
        return maxii;
    }
};

//One of my Achievments First Hard Problem Solved ...
//Finally We Do it!!!
