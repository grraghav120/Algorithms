class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int low=0,high=matrix[i].size()-1,mid;
            if(target<matrix[i][0]) return false;
            while(low<=high){
                mid=low+(high-low)/2;
                if(matrix[i][mid]==target) return true;
                else if(matrix[i][mid]<target) low=mid+1;
                else high=mid-1;
            }
            if(target<matrix[i][matrix[i].size()-1]) return false;
        }
        return false;
    }
};
