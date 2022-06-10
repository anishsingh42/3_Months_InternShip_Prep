#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/reverse-linked-list-ii/
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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *dummy = new ListNode(INT_MIN);
        dummy->next = head;

        // phase one
        ListNode *curr = dummy;
        ListNode *prevLeft = NULL;

        for (int i = 0; i < left; i++)
        {
            prevLeft = curr;
            curr = curr->next;
        }

        // cout << "PrevLeft: " << prevLeft->val << "\n";
        // cout << "Curr after phase 1: "<< curr->val << "\n";

        // phase two
        ListNode *currRight = curr;
        ListNode *prevRight = NULL;
        ListNode *forward = NULL;

        int diff = (right - left) + 1;
        // Reverse the Node between right and left
        for (int i = 0; i < diff; i++)
        {
            forward = currRight->next;
            currRight->next = prevRight;
            prevRight = currRight;
            currRight = forward;
        }
        // cout << "PrevRight: " << prevRight->val << "\n";
        // cout << "Curr right: " << currRight->val << "\n";

        // cout << "Debug: " << prevRight->val << "\n";

        // phase three
        prevLeft->next->next = currRight;
        prevLeft->next = prevRight;

        return dummy->next;
    }
};

int main()
{
    return 0;
}