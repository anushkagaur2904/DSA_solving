//Delete tail of LL
//https://www.geeksforgeeks.org/problems/deletion-at-the-end-of-a-linked-list/1
/*
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    //either empty or only one node
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;//second last element
    }
    free(temp->next);//delete last element
    temp->next=NULL;//make second last element as last element
    return head;
}
//Time Complexity: O(n) where n is the number of nodes in the linked list
//Space Complexity: O(1) as we are not using any extra space
*/