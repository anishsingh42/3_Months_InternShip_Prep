#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/reverse-linked-list/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseListIterative(ListNode *head)
{
    // iterative
    ListNode *currNode = head;
    ListNode *prevNode = NULL;
    ListNode *nextNode = NULL;
    while (currNode)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    head = prevNode;
    return head;
    // T.C = O(n);
    // S.C = O(1);
}
ListNode *solve(ListNode *curr, ListNode *prev, ListNode *forward)
{
    if (curr == NULL)
        return prev;
    // ListNode *forward = curr->next;
    // curr->next = pre;
    // return solve(forward,curr);
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    return solve(curr, prev, forward);
}
ListNode *reverseList(ListNode *head)
{
    // Recursive
    ListNode *curr = head;
    ListNode *pre = NULL;
    ListNode *next;
    return solve(curr, pre, next);
}
