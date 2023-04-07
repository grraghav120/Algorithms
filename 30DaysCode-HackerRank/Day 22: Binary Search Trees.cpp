
		int getHeight(Node* root){
            if(root==NULL) return -1;
            int l=getHeight(root->left);
            int r=getHeight(root->right);
            return 1+max(l,r);
          //Write your code here
        }
