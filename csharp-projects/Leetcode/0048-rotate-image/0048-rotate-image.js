/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function(matrix) {
    let n = matrix.length;
    for(let i = 0; i < n; i++) {
        let arr = [];
        for(let j = n - 1; j >= 0; j--) {
            arr.push(matrix[j][i])
        }
        matrix.push(arr);
    }
    matrix.splice(0, n);
};