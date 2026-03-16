//Array To LL Conversion
/*
arr[] = [2,1,3,8]
head is initially defined as NULL
1. Create a new node with data as 2 and next as NULL. Now head points to this new node.
In the answer return the head of the linked list.

Node* convertArr2LL(vector<int> &arr){//returns pointer to head
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp; or mover = mover->next;
    }
    return head;
}
Node head = convertArr2LL(arr);
cout<< head->data; //2
cout<< head->next->data; //1
*/

