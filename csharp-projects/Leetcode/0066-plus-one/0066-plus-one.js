/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let pointer = digits.length-1;
    let carry = true;
    while(pointer >= 0 && carry) {
        digits[pointer] = digits[pointer] + 1;
        carry = false;
        if (digits[pointer] === 10) {
            digits[pointer] = 0;
            carry = true;
        }
        pointer--;
    }
    if(carry) digits.unshift(1);
    return digits;
};