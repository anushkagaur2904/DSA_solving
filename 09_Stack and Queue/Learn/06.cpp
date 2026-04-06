//QUEUE USING LL

/*
class Queue{
    Node* start;
    Node* end;
    int size=0;

    push(x){
        Node* temp = new Node(x);
        if(start==NULL){
            start=end=temp;
        }
        else{
            end->next=temp;
        }
        size++;
    }

    pop(){
        if(start==NULL){
            empty;
        }
        temp=start;
        start=start->next;
        free(temp);
        size--;
    }

    top(){
        if(start==NULL){
            empty;
        }
        else{
            return start->data;
        }
    }
}

TC AND SC SAME AS STACK USING LL
*/

