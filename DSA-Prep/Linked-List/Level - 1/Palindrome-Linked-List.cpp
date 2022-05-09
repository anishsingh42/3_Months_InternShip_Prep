#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/palindrome-linked-list/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Brute force method
int sizeOfLL(ListNode *headref)
{
    ListNode *ptr = headref;
    int cnt = 0;
    while (ptr)
    {
        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}
void copyLLintoArray(ListNode *&ptr, int arr[])
{
    int i = 0;
    while (ptr)
    {
        arr[i++] = ptr->val;
        ptr = ptr->next;
    }
}
bool isArrayPalindrome(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
    }
    return true;
}
bool isPalindrome1(ListNode *head)
{
    int size = sizeOfLL(head);
    int *arr = new int[size];

    ListNode *ptr = head;
    copyLLintoArray(ptr, arr);

    return isArrayPalindrome(arr, size);
    // tc = o(n);
    // sc = o(n);
}

ListNode *middleLL(ListNode *head)
{
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
ListNode *reverseLL(ListNode *&headref)
{
    ListNode *curr = headref;
    ListNode *prev = NULL;
    ListNode *forward;

    while (curr)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool isPalindrome2(ListNode *head)
{
    ListNode *mid = middleLL(head);
    // cout << "mid: " << mid->val << '\n';
    ListNode *temp = mid;
    mid = reverseLL(temp);

    ListNode *p1 = head;
    ListNode *p2 = mid;
    while (p2)
    {
        if (p1->val != p2->val)
            return false;
        p1 = p1->next;
        p2 = p2->next;
    }
    temp = mid;
    mid = reverseLL(temp);
    return true;
}