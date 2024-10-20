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
    public ListNode deleteMiddle(ListNode head) {
        ListNode a=head,b=head,p=head;
        if(b.next==null)
        return null;
        while(b!=null && b.next!=null){
            p=a;
            a=a.next;
            b=b.next.next;
        }
        p.next=a.next;
        return head;
    }
}