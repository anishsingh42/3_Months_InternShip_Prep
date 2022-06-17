#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * dummy = new ListNode(INT_MIN);
        dummy->next = head;
        
        int size = 0;
        ListNode *ptr = dummy;
        while(ptr){
            ptr = ptr->next;
            size++;
        }
        cout << " size : " << size << "\n";
        ptr=dummy;
        ListNode * prev = NULL;
        for(int i=0; i<(size-n); i++){
            prev = ptr;
            ptr = ptr->next;
        }
        // cout << "ptr: " << ptr->next->val << endl;
        // cout << "prev: "<< prev->next->val << endl;
        prev->next = ptr->next;
        ptr->next = NULL;
        delete ptr;        
        return dummy->next;
    }
};


int main(){
    return 0;
}