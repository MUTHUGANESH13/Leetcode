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
    ListNode* modifiedList(vector<int>& n, ListNode* head) {
        if (!head || n.empty()) 
        return head;
        unordered_set<int>a(n.begin(),n.end());
        while (head && a.count(head->val)) { 
                head = head->next;
            }
            if(head==NULL)
            return head;
            ListNode* temp=head;
        while(temp && temp->next){
            if(a.count(temp->next->val)){
               temp->next=temp->next->next;
            }
            else
            temp=temp->next;
        }
    return head;
    }
};