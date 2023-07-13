# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, a: ListNode, b: ListNode) -> Optional[ListNode]:
        cntA, cntB = 0, 0
        tmp = a
        while tmp:
            cntA = cntA+1
            tmp = tmp.next
        tmp = b
        while tmp:
            cntB = cntB+1
            tmp = tmp.next
        ptrA = a
        ptrB = b
        if cntA > cntB:
            tmp = a
            while cntA-cntB:
                tmp = tmp.next
                cntA-=1
            ptrA = tmp
        else: 
            tmp = b
            while cntB-cntA:
                tmp = tmp.next
                cntB-=1
            ptrB = tmp
        
        while ptrA and ptrB and ptrA != ptrB:
            ptrA = ptrA.next
            ptrB = ptrB.next
            
        return ptrA