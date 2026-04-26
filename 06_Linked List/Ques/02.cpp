//Remove nth node from end of LL
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//+++++++++APPROACH 1+++++++++++++++
/*
TC => O(N)+O(N) => O(2N) first N to count the length of LL and second N to reach the node before the node to be deleted
SC => O(1)
*/

//++++++++++OPTIMAL+++++++++++++
/*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *fast = dummy;
        ListNode *slow = dummy;

        for(int i=1;i<=n;i++){
            fast = fast->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};
TC => O(N)
SC => O(1)
*/