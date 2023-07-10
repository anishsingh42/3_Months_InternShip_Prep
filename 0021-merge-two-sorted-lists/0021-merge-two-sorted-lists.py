# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        if(l1==None):
            return l2
        if(l2==None):
            return l1
        #define a dummy
        dummy = ListNode(0)
        temp = dummy
        while(l1!=None and l2!=None):
            if(l1.val <= l2.val):
                temp.next = l1
                l1 = l1.next
            else:
                temp.next = l2
                l2 = l2.next
            temp = temp.next
        # if(l1!=None):
        #     temp.next = l1
        # else:
        #     temp.next = l2
        temp.next = l1 or l2
        return dummy.next
                