/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    let i;
    let result = '';
    let symbols = {
        1 : 'I',
        4 : 'IV',
        5 : 'V',
        9 : 'IX',
        10 : 'X',
        40 : 'XL',
        50 : 'L',
        90 : 'XC',
        100 : 'C',
        400 : 'CD',
        500 : 'D',
        900 : 'CM',
        1000 : 'M'
    }
    let symbolKeys = Object.keys(symbols);
    while (num > 0) {
        i = 1;
        while (symbolKeys[i] <= num) {
            i++;
        }
        num -= symbolKeys[i-1];
        result += symbols[symbolKeys[i-1]];
    }
    return result;
};