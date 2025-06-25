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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            ListNode* nex=temp->next;
            int el=temp->val;
            temp->val=nex->val;
            nex->val=el;
            temp=nex->next;
        }
        return head;
    }
};