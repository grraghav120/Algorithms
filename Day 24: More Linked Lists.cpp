Node* removeDuplicates(Node *head)
          {
              if(head==NULL) return NULL;
              Node *curr=head,*prev;
              while(curr!=NULL){
                  if(curr==head){
                      prev=curr;
                      curr=curr->next;
                  }
                  else if(curr->data==prev->data){
                      curr=curr->next;
                      prev->next=curr;
                  }
                  else{
                      prev=curr;
                      curr=curr->next;
                  }
              }
              return head;
            //Write your code here
          }
