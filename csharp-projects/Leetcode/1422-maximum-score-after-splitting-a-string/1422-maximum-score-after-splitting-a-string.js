/**
 * @param {string} s
 * @return {number}
 */
var maxScore = function(s) {
    let trailingOnes = s.length - s.split("").slice(1).join("").split("1").join("").length - 1;
    let leadingZeroes = 0;
    let maxScore = 0;
    for(let pointer = 0; pointer < s.length - 1; pointer++) {
        if(s[pointer] === '0') leadingZeroes++;
        maxScore = maxScore > (leadingZeroes + trailingOnes) ? maxScore : (leadingZeroes + trailingOnes);
        if(s[pointer + 1] === '1') trailingOnes--;
    }
    return maxScore;
};