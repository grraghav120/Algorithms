class Solution {
public:
    int helper(TreeNode* root,string pathSum){
        if(!root) return -1;
        if(root->left==NULL && root->right==NULL){
            pathSum+=char(root->val+'0');
            return stoi(pathSum);
        }
        int lf=helper(root->left,pathSum+char(root->val+'0'));
        if(lf==-1) lf=0;
        int rh=helper(root->right,pathSum+char(root->val+'0'));
        if(rh==-1) rh=0;
        return lf+rh;
    }
    int sumNumbers(TreeNode* root) {
        return helper(root,"");
    }
};
