//Search in LL
//https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1
/*
bool search(Node* head, int key){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
*/
//Time complexity: O(n) in worst case
//Best case: O(1) if key is present at head of LL
//Average case: O(n/2) if key is present at middle of LL