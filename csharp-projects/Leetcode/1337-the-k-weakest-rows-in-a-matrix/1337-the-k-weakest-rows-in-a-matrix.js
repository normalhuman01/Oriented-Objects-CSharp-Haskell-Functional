/**
 * @param {number[][]} mat
 * @param {number} k
 * @return {number[]}
 */
var kWeakestRows = function(mat, k) {
    let scoreArray = [];
    let scoreIndexArray = [];
    let minIndex = 0;
    mat.forEach((row, index) => {
        scoreArray[index] = row.filter(x => x === 1).length;
    })
    for(i=0; i<k; i++) {
        minIndex = scoreArray.indexOf(Math.min(...scoreArray));
        scoreArray[minIndex] = 101;
        scoreIndexArray.push(minIndex);
    }
    return scoreIndexArray;
};