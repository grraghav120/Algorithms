class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        int i=0,n,low,high;
        queue<TreeNode*> qu;
        vector<int> v;
        qu.push(root);
        while(!qu.empty()){
            n=qu.size();
            while(n--){
                TreeNode* node=qu.front();
                qu.pop();
                if(node->left) qu.push(node->left);
                if(node->right) qu.push(node->right);
                if(i&1){
                    if(node->val %2!=0) return false;
                    if(v.size()>=1 && node->val>=v.back()) return false;
                    v.push_back(node->val);
                }
                else{
                    if(node->val %2==0) return false;
                    if(v.size()>=1 && node->val<=v.back()) return false;
                    v.push_back(node->val);
                }
            }
            i++;
            v.clear();
        }
        return true;
    }
};
