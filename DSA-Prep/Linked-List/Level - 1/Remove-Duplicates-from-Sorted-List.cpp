#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL)
        return head;
    ListNode *curr = head;
    while (curr != NULL)
    {

        if ((curr->next != NULL) && (curr->val == curr->next->val))
        {
            ListNode *nextNode = curr->next->next;
            ListNode *del = curr->next;
            delete (del);
            curr->next = nextNode;
        }
        else
            curr = curr->next;
    }
    return head;
}