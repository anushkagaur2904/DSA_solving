//Delete Kth Element from Linked List
/*
If K=1 i.e delete first element
If K=3 i.e delete 3rd element and 2nd element will link to 4th element
i.e previous node will link to next node of current node and delete current node
prev->next=prev->next->next;
or prev->next=current->next;

if K is greater than length of linked list then do nothing and return head

Node* deleteK(Node* head,int k){
    if(head==NULL)return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}
//TC O(N) where N is the number of nodes in linked list
//SC O(1)
*/
