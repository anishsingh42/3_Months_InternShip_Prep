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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode* root = head;
        int size = 0;
        while(root){
            size++;
            root = root->next;
        }
        k = (k%size);
        if(k==0) return head;
        
        ListNode * tail = head;
        int steps = size-k-1;
        for(int i=0;i<steps;i++){
            tail = tail->next;
        }
        ListNode * newHead = tail->next;
        ListNode * ptr = newHead;
        while(ptr->next){
            ptr = ptr->next;
        }
        
        ptr->next = head;
        tail->next = NULL;
        return newHead;
    }
};