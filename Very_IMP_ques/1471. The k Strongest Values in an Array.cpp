class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int> ans;
        int n=arr.size();
        priority_queue<pair<int,int>> pq;
        sort(arr.begin(),arr.end());
        int mid=arr[(n-1)/2];
        for(int i=0;i<n;i++) pq.push({abs(arr[i]-mid),arr[i]});
        while(k--){
            auto it=pq.top();
            ans.push_back(it.second);
            pq.pop();
        }
        return ans;
    }
};