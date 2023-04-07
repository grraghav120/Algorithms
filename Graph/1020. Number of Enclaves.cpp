class Solution {
public:
    int kitneone=0;
    bool helper(vector<vector<int>>& grid,int sr,int sc,int n,int m){
        if(sr<0 || sr>=n || sc<0 || sc>=m) return true;
        if(grid[sr][sc]==0) return false;
        if(grid[sr][sc]==1){
            grid[sr][sc]=-1;
            kitneone++;
            bool t=helper(grid,sr-1,sc,n,m);
            bool r=helper(grid,sr,sc+1,n,m);
            bool b=helper(grid,sr+1,sc,n,m);        
            bool l=helper(grid,sr,sc-1,n,m);
            return (t||r||l||b);
        }
        return false;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),c=0,concmp=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    kitneone=0;
                    bool ans=helper(grid,i,j,n,m);
                    if(!ans){
                        c+=kitneone;
                    }
                }
            }
        }
        return c;
    }
};
