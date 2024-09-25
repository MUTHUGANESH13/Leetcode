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
    int getDecimalValue(ListNode* head) {
        string s="";
        while(head){
            if(head->val==1)
            s+='1';
            else
            s+='0';
            head=head->next;
        }
        int i,k=0,a=0;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]=='1')
            a+=pow(2,k);
            k++;
        }
        return a;
    }
};