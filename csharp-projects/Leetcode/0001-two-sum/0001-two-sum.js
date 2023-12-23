/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let indexes = [];
    nums.some((num, index) => {
        let match = nums.indexOf(target - num, index + 1);
        if(match != -1) {
            indexes.push(index);
            indexes.push(match);
            return true;
        }
    })
    return indexes;
};