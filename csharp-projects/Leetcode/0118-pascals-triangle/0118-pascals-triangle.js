/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    if(numRows === 1) return [[1]];
    else if(numRows === 2) return [[1],[1,1]];
    else {
        let array = [[1],[1,1]];
        numRows -= 2;
        while(numRows > 0) {
            array.push(generateRow(array[array.length - 1]));
            numRows--;
        }
        return array;
    }
};
let generateRow = function(prevRow) {
    let row = [];
    row.push(1);
    for(let i=1; i<prevRow.length; i++) {
        row.push(prevRow[i-1] + prevRow[i]);
    }
    row.push(1);
    return row;
};