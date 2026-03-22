//Delete certain value in LL
/*
Node* deleteK(Node* head,int el){
    if(head==NULL)return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}
*/