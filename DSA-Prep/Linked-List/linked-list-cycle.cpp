#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/linked-list-cycle/submissions/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool hasCycle(ListNode *head)
{
    if (!head || !(head->next))
    {
        return false;
    }
    ListNode *rabbit = head->next;
    ListNode *turtle = head;

    while (rabbit != NULL)
    {
        rabbit = rabbit->next;
        if (rabbit != NULL)
        {
            rabbit = rabbit->next;
        }
        turtle = turtle->next;
        if (rabbit == turtle)
        {
            return true;
        }
    }
    return false;
}