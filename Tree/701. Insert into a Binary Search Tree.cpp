
class Solution {
public:
    TreeNode* helper(TreeNode* root,int val){
        if(!root){
            TreeNode* node=new TreeNode(val);
            return node;
        }
        if(root->val > val) root->left=helper(root->left,val);
        else root->right=helper(root->right,val);
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        root=helper(root,val);
        return root;
    }
};
