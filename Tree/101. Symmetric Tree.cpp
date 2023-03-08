class Solution {
public:
    bool helper(TreeNode* rootL,TreeNode* rootR){
        if(rootL==NULL && rootR==NULL) return true;
        if(rootL==NULL || rootR==NULL) return false;
        return rootL->val==rootR->val && helper(rootL->left,rootR->right) && helper(rootL->right,rootR->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return helper(root->left,root->right);
    }
};
