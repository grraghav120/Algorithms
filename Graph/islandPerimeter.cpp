int dfs(int i,int j,vector<vector<int>>& grid,int n,int m){
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j]==0) return 1;
        if(grid[i][j]==2) return 0;
        grid[i][j]=2;
        int top=dfs(i-1,j,grid,n,m);
        int bottom=dfs(i+1,j,grid,n,m);
        int right=dfs(i,j+1,grid,n,m);
        int left=dfs(i,j-1,grid,n,m);
        return top+bottom+right+left;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans+=dfs(i,j,grid,n,m);
                }
            }
        }
        return ans;
    }
