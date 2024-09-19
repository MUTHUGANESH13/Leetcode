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
    public ListNode modifiedList(int[] n, ListNode head) {
        if(head==null||n.length==0)
        return head;
        Set<Integer>a=new HashSet<>();
        for (int x : n) {
            a.add(x);
        }
        while(head!=null && a.contains(head.val)){
            head=head.next;
        }
        if(head==null)
        return head;
        ListNode temp=head;
        while(temp!=null &&temp.next!=null){
            if(a.contains(temp.next.val))
            temp.next=temp.next.next;
            else
            temp=temp.next;
        }
        return head;
    }
}