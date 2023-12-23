/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.toLowerCase();
    let sArr = s.split("");
    var alphaNumeric = /^[0-9a-z/s]/;
    for(let i=0; i<sArr.length; i++) {
        if(!sArr[i].match(alphaNumeric)){
            sArr.splice(i, 1);
            i--;
        }
    }
    s = sArr.join("");
    let sRev = sArr.reverse();
    sRev = sRev.join("");
    return s === sRev;
};