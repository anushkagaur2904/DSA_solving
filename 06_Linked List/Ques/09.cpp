//Palindrome LL check
//https://leetcode.com/problems/palindrome-linked-list/
//++++++++BRUTE FORCE++++++++++
/*
TC => O(N) + O(N) .. one to put in array and other to check
SC => O(N)
*/

/*

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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){//use && here
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->val != slow->val){
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};

find middle of LL O(N/2)
reverse right half of LL O(N/2)
compare left and right half O(N/2)
again find middle O(N/2)
again reverse to get original LL O(N/2)
last 2 are optional ...depends on question O(N/2)

SC => O(1)
*/