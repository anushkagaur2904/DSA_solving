//BST Iterator
//https://leetcode.com/problems/binary-search-tree-iterator/description/

/*
class BSTIterator {
public:
    stack<TreeNode*> myStack;
    void pushAll(TreeNode* node){
        for(;node!=NULL;myStack.push(node),node=node->left);
    }
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* topNode = myStack.top();
        myStack.pop();
        pushAll(topNode->right);
        return topNode->val;
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
};
*/

//Two Sum in BST
//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

/*
class BSTIterator {
public:
    stack<TreeNode*> myStack;
    //if reverse=true mtlb before
    //if reverse=false mtlb next
    bool reverse=true;
    void pushAll(TreeNode* node){
        for(;node!=NULL;){
            myStack.push(node);
            if(reverse==true){//before
                node=node->right;
            }
            else{
                node=node->left;//next
            }
        }
    }
    BSTIterator(TreeNode* root,bool isReverse) {
        reverse = isReverse;
        pushAll(root);
    }
    
    int next() {
        TreeNode* topNode = myStack.top();
        myStack.pop();
        if(!reverse) pushAll(topNode->right);//next
        else pushAll(topNode->left);//before
        return topNode->val;
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        //next
        BSTIterator left(root,false);//next
        BSTIterator right(root,true);//before

        int i = left.next();
        int j = right.next();

        while(i<j){
            if(i+j==k) return true;
            else if(i+j<k) i = left.next();
            else j = right.next();
        }
        return false;
    }
};
*/