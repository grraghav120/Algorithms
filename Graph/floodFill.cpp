class Solution {
public:

    void dfs(int sr,int sc,vector<vector<int>> &image,int color,int current_col,int n,int m){
        if(sr<0 || sr>=n || sc<0 || sc>=m) return;
        if(image[sr][sc]==current_col){
            image[sr][sc]=color;
            dfs(sr,sc-1,image,color,current_col,n,m);
            dfs(sr,sc+1,image,color,current_col,n,m);
            dfs(sr-1,sc,image,color,current_col,n,m);
            dfs(sr+1,sc,image,color,current_col,n,m);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int current_col=image[sr][sc],n=image.size(),m=image[0].size();
        if(image[sr][sc]==color) return image;
        dfs(sr,sc,image,color,current_col,n,m);
        return image;
    }
};


// Contributed By Raghav Garg (grraghav120)