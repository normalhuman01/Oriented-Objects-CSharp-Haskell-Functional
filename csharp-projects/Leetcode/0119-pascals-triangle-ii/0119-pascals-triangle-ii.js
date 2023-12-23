/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
    if (rowIndex === 0) return [1];
    else if (rowIndex === 1) return [1,1];
    else {
        let array = [1,1];
        rowIndex -= 2;
        while(rowIndex >= 0) {
            array = generateRow(array);
            rowIndex--;
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