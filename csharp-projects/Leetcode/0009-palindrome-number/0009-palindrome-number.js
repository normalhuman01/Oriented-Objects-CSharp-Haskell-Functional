/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    x = x.toString();
    let x2 = x.split("");
    x2 = x2.reverse();
    x2 = x2.join("");
    return x === x2;
};