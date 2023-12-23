/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    var listLength = 0;
    var traverser = head;
    var middleNode = head;
    var midIndex = 0;
    while(traverser !== null) {
        listLength += 1;
        traverser = traverser.next;
    }
    midIndex = (listLength%2) === 0 ? listLength/2 + 1 : Math.ceil(listLength/2);
    for(i=1; i<midIndex; i++){
        middleNode = middleNode.next;
    }
    return middleNode;
};