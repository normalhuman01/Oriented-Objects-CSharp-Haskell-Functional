/**
 * @param {number[]} nums
 * @return {number[]}
 */
var buildArray = function(nums) {
    const newArray = new Array(nums.length);
    for(let i=0; i<nums.length; i++) {
        newArray[i] = nums[nums[i]];
    }
    return newArray;
};