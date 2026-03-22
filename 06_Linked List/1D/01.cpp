//Intro To LL
//arrays are stored in heap memory in contiguous location
//LL help to increase and decrease the size
//LL not in contiguous locations, but in heap
//used in implementation of stack and queue
//in real life used in browsers

/*
int x=2
int *y = &x //pointer to memory location of x
cout<<y
*/
//in LL we are storing two things -> data and pointer to next memory location
//to de this we define self defined data type -> STRUCT
/*
struct node{
    int data
    node* next
    Node(data1,next1){//creating constructor
        data=data1
        next=next1
    }
    or 
    Node(int data1){
    data=data1;
    next=nullptr;
    }//isme next ko default value de di hai nullptr, to jab bhi hum node create karenge to next ki value nullptr hi rahegi, jab tak hum usko change na kare
}
*/

//INITIALIZING VALUE
/*
Suppose i have to add 2
Node x = Node(2,NULL) //data is 2 and next is NULL
//this is just an object, not a pointer
Node *y = &x //pointer to memory location of x
//we can also do this in one line
Node *y = new Node(2,NULL) //this will create a node in heap memory
//this will store pointer to memory location of node in y

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
int main(){
    vector<int> arr = {2,5,8,7};
    Node* y = new Node(arr[0],nullptr);
    cout<<y//Memory location printed

    Node y = node(arr[0],nullptr);//object created in stack memory
    cout<<y.data//2 printed

    Node *y = new Node(arr[0],nullptr);//object created in heap memory
    cout<<y->data//2 printed
}

Disadvantages of using struct => cant use OOPS concept
so use class instead of struct
*/
/*
Memory space depends on system
in 32 bit system -> 4 bytes for int and 4 bytes for pointer = 8 bytes
in 64 bit system -> 4 bytes for int and 8 bytes for pointer = 12 bytes
*/

/*
Difference between node and node* -> node is an object and node* is a pointer to an object
*/