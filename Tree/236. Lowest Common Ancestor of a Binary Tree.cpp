class Solution {
public:
    vector<TreeNode*> path;
    bool findNode(TreeNode* root,TreeNode* p){
        if(!root) return false;
        if(root->val==p->val){
            path.push_back(root);
            return true;
        }
        if(findNode(root->left,p)){
            path.push_back(root);
            return true;
        }
        if(findNode(root->right,p)){
            path.push_back(root);
            return true;
        }
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<vector<TreeNode*>> paths;
        bool ans=findNode(root,p);
        paths.push_back(path);
        path.clear();
        ans=findNode(root,q);
        paths.push_back(path);
        int k=0,j=0,n=paths[0].size(),m=paths[1].size();
        for(k=0;k<2;k++) reverse(paths[k].begin(),paths[k].end());
        for(j=0;j<min(n,m);j++) if((paths[0][j]->val)!=(paths[1][j]->val)) break;
        return paths[0][j-1];
    }
};
