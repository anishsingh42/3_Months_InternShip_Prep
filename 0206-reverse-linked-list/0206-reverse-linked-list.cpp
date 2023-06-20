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
    ListNode* reverseList(ListNode* head) {
        // iterative soln
        if(!head) return head;
        
        // ListNode * tmp = head;
        ListNode * curr = head;
        ListNode * past = NULL;
        ListNode * future = NULL;
        
        while(curr){
            future = curr->next;
            curr->next = past;
            past = curr;
            curr = future;
        }
        head = past;
        return head;
        
    }
};