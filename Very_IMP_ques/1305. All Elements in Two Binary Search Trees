class Solution {
public:
    void Preorder(TreeNode* root,vector<int>& v){
        if(root){
            v.push_back(root->val);
            Preorder(root->left,v);
            Preorder(root->right,v);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        Preorder(root1,ans);
        Preorder(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
