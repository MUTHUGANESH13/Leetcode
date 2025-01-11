/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        ListNode *x=A;
        ListNode *y=B;
        while(x!=y){
            x=x?x->next:A;
            y=y?y->next:B;
        }
        return x;
    }
};