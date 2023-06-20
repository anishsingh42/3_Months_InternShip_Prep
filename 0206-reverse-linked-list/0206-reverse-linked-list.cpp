/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* curr, ListNode* past, ListNode* future){
        if(!curr) return past;
        future = curr->next;
        curr->next = past;
        past = curr;
        curr = future;
        return reverse(curr, past, future);
        
    }
    ListNode* reverseList(ListNode* head) {
        // recursive soln
        if(!head) return head;
        ListNode * curr = head;
        ListNode * past = NULL;
        ListNode * future = NULL;
        return reverse(curr, past, future);
    }
};