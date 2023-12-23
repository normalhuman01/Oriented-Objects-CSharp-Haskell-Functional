/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
    let traverser = head;
    let listArray = [];
    let listString = "";
    let revListString = "";
    while(traverser !== null) {
        listArray.push(traverser.val);
        traverser = traverser.next;
    }
    listString = listArray.join("");
    revListString = listArray.reverse().join("");
    return listString === revListString;
};