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
    void reverse(ListNode*start, ListNode*end){
        ListNode *prev = NULL, *curr=start, *fast = NULL;
        while(prev!=end){
            fast = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fast;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next || k==1) return head;
        ListNode * start = head;
        ListNode * end = head;
        int inc = k-1;
        
        //move the end to the last position of the kth node
        while(inc--){
            end = end->next;
            if(!end) return head;
        }
        
        ListNode * nextHead = reverseKGroup(end->next, k);
        reverse(start, end);
        start->next = nextHead;
        return end;
    }
};