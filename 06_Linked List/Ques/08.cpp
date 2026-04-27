//Detect a cycle in LL
//https://leetcode.com/problems/linked-list-cycle/description/
//++++++++BRUTE FORCE+++++++++++
/*
TC => O(N)
SC => O(N)
*/

//++++++OPTIMAL+++++++
/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
TC => O(N)
SC => O(1)
*/