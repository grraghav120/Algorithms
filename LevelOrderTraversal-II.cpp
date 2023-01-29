 vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> traversal;
        if(!root) return traversal;
        queue<TreeNode*> qu;
        qu.push(root);
        vector<int> ans;
        while(!qu.empty()){
            int n=qu.size();
            while(n--){
                TreeNode* node=qu.front();
                qu.pop();
                if(node->left) qu.push(node->left);
                if(node->right) qu.push(node->right);
                ans.push_back(node->val);
            }
            traversal.push_back(ans);
            ans.clear();
        }
        reverse(traversal.begin(),traversal.end());
        return traversal;
    }
