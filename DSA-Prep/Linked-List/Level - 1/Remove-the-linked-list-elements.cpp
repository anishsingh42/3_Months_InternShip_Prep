#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/remove-linked-list-elements/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *removeElements(ListNode *head, int val)
{
    // make sure the head node is the value we want to delete
    while (head != NULL && head->val == val)
    {
        ListNode *ptr = head;
        head = head->next;
        delete (ptr);
    }
    ListNode *current = head;
    while (current)
    {
        if (current->next != NULL && current->next->val == val)
        {
            ListNode *nextNode = current->next->next;
            delete (current->next);
            current->next = nextNode;
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}