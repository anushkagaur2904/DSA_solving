//Print root to node path in BT


/*
// Class containing the solution
class Solution {
public:
    // Function to find the path from root to node with value x
    bool getPath(TreeNode* root, vector<int>& arr, int x) {
        // If current node is NULL, return false
        if (!root) {
            return false;
        }

        // Add current node's value to the path
        arr.push_back(root->val);

        // If current node's value is equal to x, return true
        if (root->val == x) {
            return true;
        }

        // Recursively search in left or right subtree
        if (getPath(root->left, arr, x) ||
            getPath(root->right, arr, x)) {
            return true;
        }

        // If not found, backtrack and remove current node
        arr.pop_back();
        return false;
    }

    // Function to get the path from root to node with value B
    vector<int> solve(TreeNode* A, int B) {
        // Vector to store the path
        vector<int> arr;

        // If root is NULL, return empty path
        if (A == NULL) {
            return arr;
        }

        // Call helper function to fill the path
        getPath(A, arr, B);

        // Return the resulting path
        return arr;
    }
};
*/


//ROOT TO LEAF PATH
//https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1
/*
class Solution {
public:
    void getPaths(TreeNode* root, vector<int>& arr,
                  vector<vector<int>>& ans) {

        if (!root) return;

        arr.push_back(root->val);

        // If current node is a leaf node
        if (!root->left && !root->right) {
            ans.push_back(arr);
            arr.pop_back();
            return;
        }

        getPaths(root->left, arr, ans);
        getPaths(root->right, arr, ans);

        // Backtracking
        arr.pop_back();
    }

    vector<vector<int>> solve(TreeNode* A) {
        vector<vector<int>> ans;
        vector<int> arr;

        getPaths(A, arr, ans);

        return ans;
    }
};
*/