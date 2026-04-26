//Merge 2 sorted lists
//https://leetcode.com/problems/merge-two-sorted-lists/
/*
TC => O(n1 + n2) length of first list plus second list
SC => O(n1+n2)
*/

//+++++++++OPTIMAL APPROACH+++++++++
/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val > l2->val) swap(l1,l2);
        ListNode* res = l1;
        while(l1!=NULL && l2!=NULL){
            ListNode* temp=NULL;
            while(l1!=NULL && l1->val <= l2->val){
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return res;
    }
};
TC => O(n1 + n2)
SC => O(1)
*/