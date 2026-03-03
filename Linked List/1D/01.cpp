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
}
*/