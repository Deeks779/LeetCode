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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (a > b) return list1;
        ListNode* prev;
        ListNode* next;
        ListNode* temp=list1;
        int c=0;
        while(temp->next!=NULL){
            if(c+1==a){
                prev=temp;
            }
            if(c==b){
                next=temp->next;
            }
            temp=temp->next;
            c++;
        }
        prev->next=list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        list2->next=next;
        return list1;
    }
};