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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>a(k,nullptr);
        ListNode* temp=head;
        int i=0,j,p;
        while(temp){
            i++;
            temp=temp->next;
        }
        temp=head;
        ListNode* curr=NULL;
       for (int l = 0; l < k; l++) {
            a[l] = temp;
            p = i / k + (l < i % k ? 1 : 0);
            for (j = 0; j < p - 1 && temp; j++) {
                temp = temp->next;
            }
            if (temp) {
                curr = temp->next;
                temp->next = nullptr;
                temp = curr;
            }
        }
        return a;
    }
};