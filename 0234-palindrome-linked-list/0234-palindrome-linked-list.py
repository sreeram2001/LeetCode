# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:

        slow = head
        fast = head

        while fast != None and fast.next != None:
            fast = fast.next.next
            slow = slow.next

        
        head2 = slow
        nxt = None
        prev = None

        while head2 != None:
            nxt = head2.next
            head2.next = prev
            prev = head2
            head2 = nxt
        
        head2 = prev
        curr = head
        while(head2 != None):
            if curr.val != head2.val:
                return False
            head2 = head2.next
            curr = curr.next

        return True