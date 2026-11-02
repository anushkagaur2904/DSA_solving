//Check if Two Trees are identical or not
//https://leetcode.com/problems/same-tree/

/*
Why do we return p == q?

Because if both are NULL, their structures match at this position.

But if only one is NULL, the structures are different.
*/

/*
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL) return (p==q);
        return (p->val == q->val) 
        && isSameTree(p->left,q->left)
        && isSameTree(p->right,q->right);
    }
};
*/