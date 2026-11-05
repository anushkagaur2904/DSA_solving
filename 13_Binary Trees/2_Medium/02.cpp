//Check for Balanced Binary Tree
//https://leetcode.com/problems/balanced-binary-tree/description/

//+++++++BRUTE++++++++
/*
class Solution {
public:
    int findHeight(Node* root) {
        if (root == NULL) return 0;

        int lh = findHeight(root->left);
        int rh = findHeight(root->right);

        return 1 + max(lh, rh);
    }

    bool check(Node* root) {
        if (root == NULL) return true;

        int lh = findHeight(root->left);
        int rh = findHeight(root->right);

        if (abs(lh - rh) > 1) return false;

        bool left = check(root->left);
        bool right = check(root->right);

        if (!left || !right) return false;

        return true;
    }

    bool isBalanced(Node* root) {
        return check(root);
    }
};
TC => O(N)*O(N)
SC => O(N)
*/

//++++++++OPTIMAL++++++++++
/*
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root)!=-1;
        //if function returns -1 then not balanced
        //if it returns height then balanced
    }
    int dfsHeight(TreeNode *root){
        if(root == NULL) return 0;

        int leftHeight = dfsHeight(root->left);
        if(leftHeight == -1) return -1;
        int rightHeight = dfsHeight(root->right);
        if(rightHeight == -1) return -1;

        if(abs(leftHeight-rightHeight)>1) return -1;
        return max(leftHeight,rightHeight)+1;
    }
};
*/