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
        ListNode * dummy = new ListNode(0);
        dummy->next = head;
        ListNode * temp = dummy;
        int sizeList = 0;
        while(temp != NULL){
            sizeList++;
            temp = temp->next;
        }
        // if()
        // cout << sizeList;
        temp = dummy;
        ListNode * prev = NULL;
        for(int i=0;i<(sizeList-n);i++){
            prev = temp;
            temp = temp->next;
        }
        // cout << prev->val << " " << temp->val;
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
        return dummy->next;
    }
};