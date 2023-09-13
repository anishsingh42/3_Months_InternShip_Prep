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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * slow_end_k = head;
        ListNode * fast_end_k = head;
        ListNode * fast_beg_k = head;
        
        for(int i = 1;i < k; i++){
            fast_beg_k = fast_beg_k->next;
            fast_end_k = fast_end_k->next;
        }
        // cout << fast_beg_k->val << " " << fast_end_k->val << endl;
        while(fast_end_k->next){
            fast_end_k = fast_end_k->next;
            slow_end_k = slow_end_k->next;
        }
        // cout << slow_end_k->val << endl;
        swap(slow_end_k->val , fast_beg_k->val);
        return head;
    }
};