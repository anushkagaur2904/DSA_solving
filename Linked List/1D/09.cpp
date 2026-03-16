//237. Delete Node in a Linked List
//https://leetcode.com/problems/delete-node-in-a-linked-list/description/
/*
This is a very famous interview question because it tests whether you understand linked list memory and pointers.

Key twist:
❗ You are NOT given the head of the list.
You only get the node that must be deleted.

🔹 Core Idea

Normally, to delete a node we do:

prev -> node -> next

We change:

prev->next = node->next

But here ❌ we don't have prev or head.

So we use a trick.

🔹 Trick Used

Instead of deleting the node directly:

Copy the value of the next node into the current node

Skip the next node

Example:

Original list

4 → 5 → 1 → 9
      ↑
     node

Steps:

1️⃣ Copy value of next node

node->val = node->next->val

List becomes

4 → 1 → 1 → 9

2️⃣ Skip next node

node->next = node->next->next

Final list

4 → 1 → 9

Effectively 5 is removed.

🔹 C++ Code
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
🔹 Dry Run

Input:

4 → 5 → 1 → 9
node = 5

Step 1:

node->val = node->next->val
4 → 1 → 1 → 9

Step 2:

node->next = node->next->next
4 → 1 → 9
🔹 Time & Space Complexity
Complexity	Value
Time	O(1)
Space	O(1)

No traversal needed.

🔹 Important Interview Points

Interviewers ask this to check if you know:

1️⃣ Why can't we delete the node normally?

Because we don't have the previous pointer.

2️⃣ Why is it guaranteed that node is not the last node?

Because we use:

node->next

If node is last → null pointer access.

3️⃣ Are we actually deleting the node?

Technically ❌

We overwrite its value and bypass the next node.

The next node becomes unreachable.

🔹 Most Important Line (Interview Explanation)

You should say:

Since we don't have access to the previous node, we copy the value of the next node into the current node and then delete the next node by updating the pointer.

🔹 Common Follow-Up Interview Question
❓ What if the node is the last node?

Then this trick does not work.

We would need:

head pointer

to traverse and find the previous node.
*/