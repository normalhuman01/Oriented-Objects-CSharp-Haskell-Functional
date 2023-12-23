/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    let pointer = head;
    let length = 1;
    while(pointer.next) {
        pointer = pointer.next;
        length++;
    }
    if(length === 1) {
        return null;
    }
    else {
        if(n === 1) {
            pointer = head;
            for(let i=0; i<length-2; i++) {
                pointer = pointer.next;
            }
            pointer.next = null;
        }
        else if (length - n === 0) {
            head = head.next;
        }
        else {
            pointer = head;
            for(let i=0; i<length-n-1; i++) {
                pointer = pointer.next;
            }
            let temp = pointer.next;
            temp = temp.next;
            pointer.next = temp;
        }
        return head;
    }
};