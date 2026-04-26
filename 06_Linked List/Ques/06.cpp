//Middle of LL
//https://leetcode.com/problems/middle-of-the-linked-list/
//+++++++++APPROACH 1++++++++++++++
/*
TC => O(N) + O(N/2) => to count number of nodes and to reach middle node
SC => O(1)
*/

//++++++++++OPTIMAL APPROACH++++++++++++++
/*
fast and slow method
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
TC => O(N/2)
SC => O(1)
*/