# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if not head:
            return head
        sizecnt = 0
        tmp = head
        while(tmp):
            sizecnt = sizecnt+1
            tmp = tmp.next
        if(sizecnt==1):
            return None
        if sizecnt==n:
            return head.next
        tmp = head
        for i in range(sizecnt-n-1):
            tmp = tmp.next
            
        # print(tmp.val)
        tmp.next = tmp.next.next
        tmp = tmp.next
        del tmp
        return head
        
            