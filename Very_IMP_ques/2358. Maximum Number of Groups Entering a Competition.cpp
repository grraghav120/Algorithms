class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int res=0,i=0,j=1,n=grades.size();
        sort(grades.begin(),grades.end());
        for(i=0;i<n;i+=j){
            res++;
            j++;
        }
        return res;
    }
};
