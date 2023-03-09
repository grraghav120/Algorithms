class Solution {
public:
    vector<string> ans;
    void helper(TreeNode* root,string path){
        if(!root) return;
        if(root->left==NULL && root->right==NULL){
            path+=to_string(root->val);
            ans.push_back(path);
        }
        helper(root->left,path+to_string(root->val)+"->");
        helper(root->right,path+to_string(root->val)+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        helper(root,"");
        return ans;
    }
};
