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
        ListNode * p1 =a;
        ListNode * p2 =b;
        int cntA = 0;
        int cntB = 0;
        while(p1){
            cntA++;
            p1 = p1->next;
        }
        
        while(p2){
            cntB++;
            p2 = p2->next;
        }
        p1 = a;
        p2 = b;
        if(cntA > cntB){
            for(int i=0;i<abs(cntA-cntB);i++){
                p1 = p1->next;
            }
        }else{
            for(int i=0;i<abs(cntA-cntB);i++){
                p2 = p2->next;
            }
        }
        
        while(p1 && p2 && p1!=p2){
            p1 = p1->next;
            p2 = p2->next;
            
            if(p1==p2) return p1;
        }
        
        return p1;
    }
};