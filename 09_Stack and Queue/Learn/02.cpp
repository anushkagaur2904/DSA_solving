//STACK USING ARRAYS
//not dynamic in nature
/*
size has to be known

class st{
    top=-1, int st[size];
    
    push(x){
        if(top>=size){
            error;
        }
        top=top+1;
        st[top]=x;
    }

    int top(){
        if(top==-1){
            empty;
        }
        else{
            return st[top];
        }
    }

    pop(){
        if(top==-1){
            empty;
        }
        top=top-1;
    }

    size(){
        return top+1;
    }
}

TC => PUSH , POP, TOP, SIZE all in O(1)
SC => depends on size of array
      
*/

