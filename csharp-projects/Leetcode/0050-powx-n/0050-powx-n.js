/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    x = Math.pow(x,Math.abs(n));
    if(n<0) x = 1/x;
    return x;
};