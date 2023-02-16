class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ll=maxDepth(root->left);
        int rr=maxDepth(root->right);
        return max(ll,rr)+1;
    }
};
