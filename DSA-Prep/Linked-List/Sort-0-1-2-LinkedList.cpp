// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;

// } Driver Code Ends
/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
public:
    // Function to sort a linked list of 0s, 1s and 2s.
    // Method - 1
   /* void insertAtTail(Node *&tail, Node *curr)
    {
        tail->next = curr;
        tail = curr;
    }

    Node *segregate(Node *head)
    {

        // Add code here
        Node *zeroHead = new Node(-1);
        Node *zeroTail = zeroHead;
        Node *oneHead = new Node(-1);
        Node *oneTail = oneHead;
        Node *twoHead = new Node(-1);
        Node *twoTail = twoHead;

        Node *curr = head;

        // create separate list 0s, 1s and 2s
        while (curr != NULL)
        {

            int value = curr->data;

            if (value == 0)
            {
                insertAtTail(zeroTail, curr);
            }
            else if (value == 1)
            {
                insertAtTail(oneTail, curr);
            }
            else if (value == 2)
            {
                insertAtTail(twoTail, curr);
            }
            curr = curr->next;
        }

        // merge 3 sublist

        // 1s list not empty
        if (oneHead->next != NULL)
        {
            zeroTail->next = oneHead->next;
        }
        else
        {
            // 1s list -> empty
            zeroTail->next = twoHead->next;
        }

        oneTail->next = twoHead->next;
        twoTail->next = NULL;

        // setup head
        head = zeroHead->next;

        // delete dummy nodes
        delete zeroHead;
        delete oneHead;
        delete twoHead;

        return head;
    } */
    //Method 2
    Node* segregate(Node *head) {
        
        // Add code here
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        Node * ptr = head;
        
        while(ptr){
            if(ptr->data == 0){
                cnt0++;
            }
            else if(ptr->data == 1){
                cnt1++;
            }
            else{
                cnt2++;
            }
            ptr = ptr->next;
        }
        
        ptr = head;
        while(cnt0-- && ptr!=NULL){
            ptr->data = 0;
            ptr = ptr->next;
        }
        while(cnt1-- && ptr!=NULL){
            ptr->data = 1;
            ptr = ptr->next;
        }
        while(cnt2-- && ptr!=NULL){
            ptr->data = 2;
            ptr = ptr->next;
        }
        
        return head;
    }
    //T.c = O(n+n+n+n) = O(4n) = O(n);
    //S.c = O(1)
};

// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1)
{
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);

        if (i == 0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main()
{

    int n;

    int t;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
} // } Driver Code Ends