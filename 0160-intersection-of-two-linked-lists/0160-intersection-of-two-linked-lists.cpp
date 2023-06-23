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
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        ListNode * p1 = a;
        ListNode * p2 = b;
        while(p1 and p2){
            ListNode * p2 = b;
            while(p2){
                if(p1 == p2) return p1;
                p2 = p2->next;
            }
            p1 = p1->next;
        }
        
        return NULL;
    }
};