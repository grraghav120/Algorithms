class Solution {
public:
    vector<int> values;
    void helper(TreeNode* root,int k){
        if(!root) return;
        if(root->left) helper(root->left,k);
        values.push_back(root->val);
        if(values.size()>=k){
            return;
        }
        if(root->right) helper(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        helper(root,k);
        for(auto it:values) cout<<it<<" ";
        return values[k-1];
    }
};
