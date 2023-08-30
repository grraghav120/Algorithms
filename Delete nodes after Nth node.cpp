#include <bits/stdc++.h>

using namespace std;

class Node{
  public:
    int data;
    Node* next=NULL;
};

void printLinkList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void solve(vector<int> &nodesVal,int n){
    int i=2;
    Node* head=new Node();
    head->data=nodesVal[0];
    Node* temp=head;
    while(i<=n){
        Node* newnode=new Node();
        newnode->data=nodesVal[i-1];
        temp->next=newnode;
        temp=temp->next;
        i++;
    }
    printLinkList(head);
}


int main()
{
    int x;
    vector<int> nodesVal;
    while(cin>>x){
      if(x==00) break;
      nodesVal.push_back(x);
    }
    int n;cin>>n;
    solve(nodesVal,n);
    return 0;
}
