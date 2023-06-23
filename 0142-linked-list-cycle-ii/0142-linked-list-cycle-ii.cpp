/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast){
            fast = fast->next;
            if(fast) fast = fast->next;
            slow = slow->next;
            if(fast == slow){
                ListNode * entry = head;
                while(slow!=entry){
                    slow = slow->next;
                    entry = entry->next;
                }return entry;
            }
        }
        return NULL;
    }
};