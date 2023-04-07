void levelOrder(Node * root){
        if(root){
            queue<Node*> qu;
            qu.push(root);
            while(!qu.empty()){
                int n=qu.size();
                while(n--){
                    Node* curr=qu.front();
                    if(curr->left) qu.push(curr->left);
                    if(curr->right) qu.push(curr->right);
                    qu.pop();
                    cout<<curr->data<<" ";
                }
            }
        }
	}
