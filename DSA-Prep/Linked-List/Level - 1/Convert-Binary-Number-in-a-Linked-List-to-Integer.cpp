#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int getDecimalValue1(ListNode *head)
{
    int cnt = 0;
    ListNode *ptr = head;
    while (ptr)
    {
        cnt++;
        ptr = ptr->next;
    }
    ptr = head;
    int ans = 0;
    cnt -= 1;
    // cout << cnt << '\n';
    while (ptr)
    {
        // cout << (1 << cnt) << '\n';
        ans += (1 << cnt) * ptr->val;
        ptr = ptr->next;
        cnt--;
    }
    return ans;
}

int getDecimalValue2(ListNode *head)
{
    int ans = 0;
    ListNode *ptr = head;
    while (ptr)
    {
        ans = (ans << 1) + ptr->val;
        ptr = ptr->next;
    }
    return ans;
}
