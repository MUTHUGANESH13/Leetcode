/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode A, ListNode B) {
        ListNode x=A;
        ListNode y=B;
        while(x!=y){
            x=x!=null?x.next:B;
            y=y!=null?y.next:A;
        }
        return x;
    }
}