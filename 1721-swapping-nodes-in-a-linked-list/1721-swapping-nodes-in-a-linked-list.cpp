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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* start=NULL;
        ListNode* end = NULL;
        ListNode* temp = head;
        int size=0;
        while(temp!= NULL){
            size++;
            if(size==k){
                start = temp;
            }
            temp= temp->next;
        }
        size = size-k;
        temp=head;
        while(size>0){
            temp=temp->next;
            size--;
        }
        swap(temp->val,start->val);
        return head;
    }
};
