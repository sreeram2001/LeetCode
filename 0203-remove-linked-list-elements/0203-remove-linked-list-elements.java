/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode l1 = dummy;
        ListNode curr = head;



        while(curr != null)
        {
            if(curr.val == val)
            {
                l1.next = curr.next;
            }
            else
            {
                l1 = curr;
            }

            curr = curr.next;
        }

        return dummy.next;
    }
}