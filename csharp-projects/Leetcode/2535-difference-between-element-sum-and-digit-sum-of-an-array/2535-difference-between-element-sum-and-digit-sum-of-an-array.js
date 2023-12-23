/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function(nums) {
    let result = 0;
    nums.forEach((n) => {
        if(n >= 10) {
            result += n;
            let sum = 0;
            while(n>0) {
                sum += (n % 10);
                n = Math.floor(n / 10);
            }
            result -= sum;
        }
    })
    return result;
};