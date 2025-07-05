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
    struct Compare{
        bool operator()(ListNode* a,ListNode* b){
            return a->val>b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;
        for(auto i :lists){
            if(i) minHeap.push(i);
        }
        ListNode* dummy=new ListNode(0);
        ListNode* add=dummy;

        while(!minHeap.empty()){
            ListNode* smallest=minHeap.top();
            minHeap.pop();
            if(smallest->next!=NULL){
                minHeap.push(smallest->next);
            }
            add->next=smallest;
            add=add->next;
        }
        return dummy->next;
    }
};