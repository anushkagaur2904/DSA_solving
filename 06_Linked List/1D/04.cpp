//Length of LL
//https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
//Never tamper with head pointer of LL, as it will be lost and you won't be able to traverse the LL again. Always use a temp pointer to traverse the LL.
/*
int cnt =0;
Node* temp=head;
while(temp!=NULL){
    cnt++;
    temp=temp->next;
}
return cnt;
*/
//Time complexity: O(n)