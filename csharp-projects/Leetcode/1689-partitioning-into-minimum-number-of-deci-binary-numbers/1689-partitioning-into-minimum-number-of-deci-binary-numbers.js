/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    let max = 0;
    n = n.split("");
    n.forEach((element) => {
        if(+element > max) max = +element;
    })
    return max;
};