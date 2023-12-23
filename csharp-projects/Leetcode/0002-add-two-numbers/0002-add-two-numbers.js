/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    var l1Head = l1;
    var l2Head = l2;
    var sumArray = [];
    var iterator = 0;
    var carry = 0;
    while(l1Head) {
        sumArray[iterator] = l1Head.val;
        l1Head = l1Head.next;
        iterator++;
    }
    iterator = 0;
    while(l2Head || carry != 0) {
        sumArray[iterator] = (sumArray[iterator] ? sumArray[iterator] : 0) + (l2Head ? l2Head.val : 0) + carry;
        carry = 0;
        if(sumArray[iterator] >= 10) {
            carry = Math.floor(sumArray[iterator] / 10);
            sumArray[iterator] = sumArray[iterator] % 10;
        }
        l2Head = l2Head ? l2Head.next : null;
        iterator++;
    }
    var resultList = new ListNode(sumArray[0]);
    var resultHead = resultList;
    for(i=1; i<sumArray.length; i++)
    {
        var newNode = new ListNode(sumArray[i]);
        resultHead.next = newNode;
        resultHead = resultHead.next;
    }
    return resultList;
};