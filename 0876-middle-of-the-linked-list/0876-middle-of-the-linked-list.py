# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if(head==None): 
            return head
        if(head.next==None):
            return head
        if(head.next.next == None):
            return head.next
        fast = head.next
        slow = head
        while(fast):
            fast = fast.next
            if(fast):
                fast = fast.next
            slow = slow.next
        return slow