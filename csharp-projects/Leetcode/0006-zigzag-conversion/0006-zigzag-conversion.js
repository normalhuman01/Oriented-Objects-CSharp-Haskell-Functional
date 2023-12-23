/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    if(numRows === 1) return s;
    let result = [];
    let commutator = true;
    let iterator = 0, index = 0;
    for(iterator = 0; iterator < numRows; iterator++) {
        result.push([]);
    }
    for(iterator = 0; iterator < s.length; iterator++, commutator ? index++ : index--) {
        if(index === numRows - 1 || (index === 0 && !commutator)) commutator = !commutator;
        result[index].push(s[iterator]);
    }
    for(iterator = 0; iterator < result.length; iterator++) {
        result[iterator] = result[iterator].join("")
    }
    result = result.join("");
    return result;
};