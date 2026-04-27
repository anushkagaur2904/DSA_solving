//Intersection of 2 LL
//https://leetcode.com/problems/intersection-of-two-linked-lists/description/
//++++++++BRUTE FORCE++++++++
/*
TC => O(n1*n2)
*/

//+++++++++++OPTIMAL+++++++++++++
/*
TC => O(n1+n2)
SC => O(n1)
*/

//++++++++BEST FIRST APPROACH++++++++++++
/*
TC => O(n2) + O(n2-n1) + O(n1) = O(2*n2)
SC => O(1)
*/

//++++++++BEST SECOND APPROACH++++++++++++
/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode* dummy1 = headA;
        ListNode* dummy2 = headB;

        while(dummy1!=dummy2){
            if(dummy1==NULL){
                dummy1 = headB;
            }
            else{
                dummy1=dummy1->next;
            }

            if(dummy2==NULL){
                dummy2=headA;
            }
            else{
                dummy2=dummy2->next;
            }
        }
        return dummy1;
    }
};
TC => O(2*n2)
SC => O(1)
*/