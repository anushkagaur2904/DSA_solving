//STACK USING LL

/*
class stack[
    Node* top;
    int size=0;

    push(x){
        Node* temp = new Node(x);
        temp->next = top;
        top=temp;
        size++;
    }

    pop(){
        Node* temp=top;
        top=top->next;
        free(temp);
        size--;
    }

    top(){
        return top->data;
    }

    size(){
        return size;
    }
]

TC => O(1) for all
SC => dynamic 
*/
