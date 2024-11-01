/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* a=head;
        ListNode* b=head;
        ListNode* p=head;
        if(b->next==NULL)
        return nullptr;
        while(b && b->next){
            p=a;
            a=a->next;
            b=b->next->next;
        }
        p->next=a->next;
        return head;
    }
};