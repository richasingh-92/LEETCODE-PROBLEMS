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
    public ListNode sortList(ListNode head) {
         ListNode temp=head;
        int count=0;
        while(temp!=null){
            count++;
            temp=temp.next;
        }
        temp=head;
        int a[]=new int[count];
        count=0;
        while(temp!=null){
            a[count++]=temp.val;
            temp=temp.next;
        }
        temp=head;
        Arrays.sort(a);
        int k=0;
        while(temp!=null){
            temp.val=a[k++];
            temp=temp.next;
        }
        return head;
        
    }
}
        
    