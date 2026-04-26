//Delete a node when a node is given (head not given)
//https://leetcode.com/problems/delete-node-in-a-linked-list/
/*
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next=node->next->next;
    }
};
TC and SC => O(1)
*/