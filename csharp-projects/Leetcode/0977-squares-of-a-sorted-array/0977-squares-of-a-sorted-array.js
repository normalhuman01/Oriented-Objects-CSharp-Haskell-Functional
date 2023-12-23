/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    const numsSquare = new Array(nums.length).fill(0);
    let pointerLeft = 0;
    let pointerRight = numsSquare.length-1;
    for(let i=numsSquare.length-1; i>=0; i--) {
        const leftSquared = Math.pow(nums[pointerLeft], 2);
        const rightSquared = Math.pow(nums[pointerRight], 2);
        if(leftSquared > rightSquared) {
            numsSquare[i] = leftSquared;
            pointerLeft++;
        }
        else {
            numsSquare[i] = rightSquared;
            pointerRight--;
        }
    }
    return numsSquare;
};