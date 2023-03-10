class Solution {
public:
    int sum=0;
    void helper(TreeNode* root){
        if(!root) return;
        if(root->right) helper(root->right);
        root->val+=sum;
        sum=root->val;
        if(root->left) helper(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        helper(root);
        return root;
    }
};
