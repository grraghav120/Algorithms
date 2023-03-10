class Solution {
public:
    int sum=0;
    void helper(TreeNode* root,int parent,int grandp){
        if(!root) return;
        if(grandp%2==0) sum+=root->val;
        helper(root->left,root->val,parent);
        helper(root->right,root->val,parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
        helper(root,-1,-1);
        return sum;
    }
};
