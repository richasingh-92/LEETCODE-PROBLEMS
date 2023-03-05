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
    ListNode* reverseList(ListNode* head) {        
        ListNode *aNode = head;
        ListNode *aPrev = NULL;
        ListNode *aNext = NULL;
        while (aNode != NULL) {
            aNext = aNode->next;
            aNode->next = aPrev;
            aPrev = aNode;
            aNode = aNext;    
        }
        return aPrev;
        
    }
}; 
    