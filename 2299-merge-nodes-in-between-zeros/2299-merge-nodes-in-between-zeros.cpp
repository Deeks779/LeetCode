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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=new ListNode(0);
        ListNode* prev=temp;
        int c=0;
        int sum=0;
        while(head != NULL){
            if(c==0 && head->val==0){
                c++;
            }
            else if(c==1 && head->val!=0){
                sum= sum+head->val;
            }
            else if(c==1 && head->val == 0){
                ListNode* add=new ListNode(sum);
                temp->next=add;
                temp=temp->next;
                c=1;
                sum=0;
            }
                
            head=head->next;
        }
        return prev->next;
    }
};