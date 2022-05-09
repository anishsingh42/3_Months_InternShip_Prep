#include <bits/stdc++.h>
using namespace std;
// **Extra Space Algorithm **

// https://leetcode.com/problems/merge-two-sorted-lists/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // extra space solution
        ListNode dummy(0);
        ListNode *temp = &dummy;

        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                temp->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else
            {
                temp->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            temp = temp->next;
        }
        while (l1)
        {
            temp->next = new ListNode(l1->val);
            l1 = l1->next;
            temp = temp->next;
        }
        while (l2)
        {
            temp->next = new ListNode(l2->val);
            l2 = l2->next;
            temp = temp->next;
        }

        return dummy.next;
    }
    /**
     * TC = O(n1 + n2);
     * SC = O(n1 + n2)
     */
};

// **Inplace Algorithm **
/**
 * TC = O(n1 + n2);
 * SC = O(1)
 */
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    // inplace solution
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    // make l1 the smaller node
    if (l1->val > l2->val)
        swap(l1, l2);
    ListNode *res = l1;
    while (l1 && l2)
    {
        ListNode *temp = NULL;
        while (l1 && l1->val <= l2->val)
        {
            temp = l1;
            l1 = l1->next;
        }
        temp->next = l2;
        swap(l1, l2);
    }
    return res;
}
