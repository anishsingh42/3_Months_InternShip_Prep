#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/merge-two-sorted-lists/
/* Link list node */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode dummy(0);
    ListNode *temp = &dummy;
    int sum = 0;
    int carry = 0;

    while (l1 || l2 || carry)
    {
        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        temp->next = new ListNode(sum % 10);
        temp = temp->next;

        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }
    return dummy.next;
}