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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l=new ListNode(0);
        ListNode* a=l;
        bool c=false;
        while(l1 && l2){
            ListNode* temp=new ListNode(0);
            if(c)
            temp->val=l1->val+l2->val+1;
            else
            temp->val=l1->val+l2->val;
            if(temp->val>9){
            temp->val=(temp->val)%10;
            c=true;}
            else
            c=false;
            l1=l1->next;
            l2=l2->next;
            l->next=temp;
            l=l->next;
        }
        while(l1){
            ListNode* temp=new ListNode(0);
            if(c)
            temp->val=l1->val+1;
            else
            temp->val=l1->val;
            if(temp->val>9){
                temp->val=(temp->val)%10;
            c=true;}
            else
            c=false;
            l1=l1->next;
            l->next=temp;
            l=l->next;
        }
        while(l2){
            ListNode* temp=new ListNode(0);
            if(c)
            temp->val=l2->val+1;
            else
            temp->val=l2->val;
            if(temp->val>9){
                temp->val=(temp->val)%10;
            c=true;}
            else
            c=false;
            l2=l2->next;
            l->next=temp;
            l=l->next;
        }
        if(c){
        ListNode* temp=new ListNode(0);
        temp->val=1;
        l->next=temp;
        l=l->next;
        }
        l->next=NULL;
        a=a->next;
        return a;
    }
};