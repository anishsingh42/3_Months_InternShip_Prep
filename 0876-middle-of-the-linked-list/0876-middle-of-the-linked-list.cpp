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
    ListNode* middleNode(ListNode* head) {
     //brute force:
        int cnt = 0;
        ListNode * tmp = head;
        while(tmp){
            cnt++;
            tmp = tmp->next;
        }
        
        tmp = head;
        
        for(int i=0;i<cnt/2;i++){
            tmp = tmp->next;
        }
        
        head = tmp;
        return tmp;
    }
};