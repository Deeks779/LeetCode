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
    int getDecimalValue(ListNode* node) {
        int c=0;
        int ans=0;
        ListNode* head=reverseList(node);
        while(head!=NULL){
            ans+=head->val *pow(2,c);
            c++;
            head=head->next;
        }
        return ans;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* next1=NULL;

        while(cur!=NULL){
            next1=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next1;
        }
        return prev;
    }
};