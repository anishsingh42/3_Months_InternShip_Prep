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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode * dummy = new ListNode(0);
        dummy->next = head;
        ListNode * tmp = dummy;
        while(tmp){
            tmp = tmp->next;
            cnt++;
        }
        ListNode * prev = NULL;
        tmp = dummy;
        for(int i=0;i<cnt-n;i++){
            prev = tmp;
            tmp = tmp->next;
        }
        prev->next = tmp->next;
        tmp->next = NULL;
        delete tmp;
        return dummy->next;
        
    }
};