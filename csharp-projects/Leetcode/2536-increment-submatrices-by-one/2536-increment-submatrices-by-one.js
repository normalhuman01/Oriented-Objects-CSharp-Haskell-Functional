/**
 * @param {number} n
 * @param {number[][]} queries
 * @return {number[][]}
 */
var rangeAddQueries = function(n, queries) {
    let array = Array(n).fill().map(() => Array(n).fill(0));
    queries.forEach((query) => {
        for(let i=query[0]; i<=query[2]; i++) {
            for(let j=query[1]; j<=query[3]; j++) {
                array[i][j] += 1;
            }
        }
    })
    return array;
};