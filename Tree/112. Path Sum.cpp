class Solution {
public:
    bool helper(TreeNode* root,int sum,int t){
        if(!root) return false;
        if(root->left==NULL && root->right==NULL){
            sum+=root->val;
            if(sum==t) return true;
        }
        bool lf=helper(root->left,sum+root->val,t);
        if(lf) return true;
        bool rh=helper(root->right,sum+root->val,t);
        if(rh) return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,0,targetSum);
    }
}; 
