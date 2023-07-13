class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        if not l1:
            return l2
        if not l2:
            return l1
        
        dummy = ListNode(0)
        temp = dummy
        
        carry = 0
        while l1 or l2 or carry:
            summation = carry
            if l1:
                summation += l1.val
                l1 = l1.next
            if l2:
                summation += l2.val
                l2 = l2.next
            
            carry = summation // 10
            temp.next = ListNode(summation % 10)
            temp = temp.next
        
        return dummy.next
