Ques
You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

The area of an island is the number of cells with a value 1 in the island.

Return the maximum area of an island in grid. If there is no island, return 0.
  
  Contributed by @grraghav120
  Please Like the repo

class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<int>>& grid,vector<int> &comp){
        if(i<0 || j<0 || i>=m || j>=n) return;
        if(grid[i][j]==1){
            grid[i][j]=0;
            comp.push_back(1);
            dfs(i,j+1,m,n,grid,comp);
            dfs(i,j-1,m,n,grid,comp);
            dfs(i+1,j,m,n,grid,comp);
            dfs(i-1,j,m,n,grid,comp);
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    vector<int> comp;
                    dfs(i,j,m,n,grid,comp);
                    int h=comp.size();
                    maxi=max(maxi,h);
                }
            }
        }
        return maxi;
    }
};
