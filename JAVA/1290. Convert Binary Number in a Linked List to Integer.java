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
    public int getDecimalValue(ListNode head) {
        String s="";
        while(head!=null){
            if(head.val==1)
            s+="1";
            else
            s+="0";
            head=head.next;
        }
        int i,k=0,a=0;
        for(i=s.length()-1;i>=0;i--){
            if(s.charAt(i)=='1')
                a+=(int)Math.pow(2,k);
            k++;
        }
        return a;
    }
}