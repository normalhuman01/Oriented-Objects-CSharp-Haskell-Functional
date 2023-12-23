/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    for(let i=0; i<nums.length; i++) {
        if(nums.filter(x => x === nums[i]).length === 1) return nums[i];
    }
};