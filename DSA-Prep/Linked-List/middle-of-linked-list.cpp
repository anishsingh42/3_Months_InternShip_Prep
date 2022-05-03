#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/middle-of-the-linked-list/submissions/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *middleNode1(ListNode *head)
{
    // Algo 1:
    ListNode *ptr = head;
    int cnt = 0;
    // finding the size of the LL
    while (ptr)
    {
        cnt++;
        ptr = ptr->next;
    }
    // finding the middle element in the LL
    int i = 0;
    ptr = head;
    while (2 * i < cnt - 1)
    {
        i++;
        ptr = ptr->next;
    }
    head = ptr;
    return head;
}

ListNode *middleNode2(ListNode *head)
{
    // Algo 2
    ListNode *rabbit = head->next;
    ListNode *turtle = head;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    if (head->next->next == NULL)
    {
        return head->next;
    }
    while (rabbit != NULL)
    {
        rabbit = rabbit->next;
        if (rabbit != NULL)
        {
            rabbit = rabbit->next;
        }
        turtle = turtle->next;
    }
    head = turtle;
    return head;
}