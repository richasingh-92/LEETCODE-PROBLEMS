/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
   
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int count = 1;
        ListNode c = head;
        while(c.next!=null){
            count++;
            c=c.next;
        }
        
        if(n == count){
            head = head.next;
            return head;
        }
        
        ListNode ln = head;
        int i= 0;
        while(++i<count-n){
            ln = ln.next;  
        }
        ln.next = ln.next.next;
        
        return head;
    }
}
        
