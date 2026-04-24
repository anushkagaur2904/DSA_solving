//Reverse a LL
//https://leetcode.com/problems/reverse-linked-list/description/

/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead = NULL;
        while(head!=NULL){
            ListNode *next = head->next;//next pointer
            head->next = newHead;//head will point to dummy node now
            newHead=head;//dummy will be head
            head=next;//head will be next
        }
        return newHead;

    }
};
TC => O(N)
SC => O(1)
*/
