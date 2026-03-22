//Insertion at head of LL
/*
insertHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}
return head;
*/


//Insertion at tail of LL
/*insertTail(Node* &head, int val){
    if(head==NULL){
    return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
    return head;
}