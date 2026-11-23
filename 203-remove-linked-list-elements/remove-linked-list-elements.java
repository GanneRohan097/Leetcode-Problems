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
    public ListNode removeElements(ListNode head, int val) {
        ListNode dummy = new ListNode(0,head);
        if(head==null){
            return head;
        }
        ListNode t=head,prev=dummy;
        while(t!=null){
            if(t.val==val){
                prev.next=t.next;
                t=prev;
            }
            else{
                prev=t;
                t=t.next;
            }
        }
        return dummy.next;
    }
}