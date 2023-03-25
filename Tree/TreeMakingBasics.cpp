#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

TreeNode* newNode(int val){
    TreeNode* node=new TreeNode;
    node->data=val;
    node->left=node->right=NULL;
    return node;
}

void preOrder(TreeNode *root){
    if(root){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(TreeNode *root){
    if(root){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void inOrder(TreeNode *root){
    if(root!=NULL){
        preOrder(root->left);
        cout<<root->data<<" ";
        preOrder(root->right);
    }
}

int main(){
    int val,val1,val2,val3;
    cin>>val>>val1>>val2>>val3;
    TreeNode* root=new TreeNode;
    root=newNode(val);
    root->left=newNode(val1);
    root->right=newNode(val2);
    root->left->right=newNode(val3);
    cout<<"preOrder is : ";
    preOrder(root);
    cout<<'\n';
    cout<<"inOrder is : ";
    inOrder(root);
    cout<<'\n';
    cout<<"postOrder is : ";
    postOrder(root);
    cout<<'\n';
}