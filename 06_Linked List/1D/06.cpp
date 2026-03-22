//Deletion of Head of LL
//https://www.geeksforgeeks.org/problems/delete-head-of-linked-list/1
/*
move the head pointer to the next node and delete the old head node

Node* deleteHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp; or free(temp);
    return head;
}
*/
//Time Complexity: O(1)
//Auxiliary Space: O(1)
