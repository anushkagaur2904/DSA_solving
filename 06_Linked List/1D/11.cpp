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

//Inserting at Kth element
//K will be from 1 to n+1
/*
if k==1 then insert at head
*/
Node* insertK(head,el,k){
    if(head==NULL){
        if(k==1) return new Node(el);
        else return NULL;//not possible
    }
    if(k==1){
        Node* temp=new Node(el,head);
        return temp;
    }
    
}
