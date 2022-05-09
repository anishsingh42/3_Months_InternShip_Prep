#include<bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //brute force
        //tc = o(n*n);
        //sc = o(1);
        
        ListNode * p1 = headA;
        
        while(p1!=NULL){
            ListNode * p2 = headB;
            while(p2!=NULL){
                if(p1 == p2){
                    // cout << p2 << '\n';
                    return p2;
                }
                p2 = p2->next;
            }
            p1 = p1->next;
        }
        return NULL;
    }