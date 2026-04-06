//implement stack using queue
//https://leetcode.com/problems/implement-stack-using-queues/
/*
class Stack{
    queue<int> q;

    push(x){
        size = q.size();
        q.push(x);
        for(i=1 to size){//yaha pe purani size use ho rhi increment se pehle
            q.push(q.front());
            q.pop();
        }
    }
    pop(){
        q.pop();
    }
    top(){
        return q.front();
    }
}

TC => PUSH O(N)....rest all O(1)
SC => dynamic

*/

/*
push(4)
Q => 4

push(9)
Q => 4 9
here if u ask top it will return 4 ...but we want 9
so re arrange queue...reverse queue is solution

Q => 9 4
*/