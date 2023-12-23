/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    let a = 2, res = n > 3 ? 3 : n;
    while(n > 3) {
        [a, res] = [res, res + a]
        n--;
    }
    return res;
};