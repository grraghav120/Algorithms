class Solution {
public:
    void helper(TreeNode* root,string tillPath,vector<string> & paths){
        if(!root) return;
        if(root->left==NULL && root->right==NULL){
            tillPath+=char(root->val+97);
            reverse(tillPath.begin(),tillPath.end());
            paths.push_back(tillPath);
            return;
        }
        helper(root->left,tillPath+char(root->val+97),paths);
        helper(root->right,tillPath+char(root->val+97),paths);
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string> paths;
        helper(root,"",paths);
        string ans=paths[0];
        for(auto it:paths){
            ans=min(ans,it);
        }
        return ans;
    }
};
