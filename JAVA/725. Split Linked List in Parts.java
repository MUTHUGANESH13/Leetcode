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
    public ListNode[] splitListToParts(ListNode head, int k) {
        ListNode[] a=new ListNode[k];
        ListNode temp=head;
        int i=0,j,p,l;
        while(temp!=null){
            i++;
            temp=temp.next;
        }
        temp=head;
        ListNode curr=null;
        for(l=0;l<k;l++){
            a[l]=temp;
            p=i/k+(l<i%k?1:0);
            for(j=0;j<p-1&&temp!=null;j++){
                temp=temp.next;
            }
            if(temp!=null){
                curr=temp.next;
                temp.next=null;
                temp=curr;
            }
        }
        return a;
    }
}