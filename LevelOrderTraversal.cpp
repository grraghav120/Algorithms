
// Contributed by Raghav Garg

#include <bits/stdc++.h>
using namepace std;

vector<vector<int>> LevelOrderTraversal(Treenode* root){
    vector<vector<int>> traverse;
    if(root){
        queue<Treenode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> levels;
            while(n--){
                Treenode * node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                levels.push_back(node->val);
            }
            traverse.push_back(levels);
        }
    }
    return traverse;
}
