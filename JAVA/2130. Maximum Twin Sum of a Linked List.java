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
    public int pairSum(ListNode head) {
        List<Integer>a=new ArrayList<>();
        int i,l=0;
        while(head!=null){
            a.add(head.val);
            head=head.next;
            l++;
        }
        for(i=0;i<l/2;i++){
            a.set(i, a.get(i) + a.get(a.size() - 1 - i));
        }
        return Collections.max(a);
    }
}