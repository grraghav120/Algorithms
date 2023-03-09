class Solution {
public:
    vector<vector<int>> res;
    void helper(TreeNode* root,int sum,int t,vector<int>& path){
        if(root->left==NULL && root->right==NULL){
            path.push_back(root->val);
            sum+=root->val;
            if(sum==t) res.push_back(path);
            path.pop_back();
        }
        if(root->left){
            path.push_back(root->val);
            helper(root->left,sum+root->val,t,path);
            path.pop_back();
        }
        if(root->right){
            path.push_back(root->val);
            helper(root->right,sum+root->val,t,path);
            path.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return res;
        vector<int> path;
        helper(root,0,targetSum,path);
        return res;
    }
};
