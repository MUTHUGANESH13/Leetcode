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
    private int gcd(int a,int b)
    {
        return (b==0?a:gcd(b,a%b));
    }
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode temp=head;
        while(temp!=null && temp.next!=null){
            ListNode t=new ListNode(gcd(temp.val,temp.next.val));
            t.next=temp.next;
            temp.next=t;
            temp=temp.next.next;
        }
        return head;
    }
}