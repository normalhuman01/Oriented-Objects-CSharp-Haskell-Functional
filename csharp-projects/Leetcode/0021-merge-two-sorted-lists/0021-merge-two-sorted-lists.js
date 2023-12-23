/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
    let root = new ListNode();
    const result = root;
    while (list1 && list2) {
        if(list1.val <= list2.val) {
            root.next = list1;
            list1 = list1.next;
        }
        else {
            root.next = list2;
            list2 = list2.next;
        }
        root = root.next;
    }
    if(list1) root.next = list1;
    if(list2) root.next = list2;
    return result.next;
};