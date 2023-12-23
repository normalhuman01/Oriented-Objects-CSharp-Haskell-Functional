/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let area = 0
    let leftPointer = 0;
    let rightPointer = height.length - 1;
    while(leftPointer < rightPointer) {
        let tempHeight = Math.min(height[leftPointer],height[rightPointer]);
        let tempArea = tempHeight*(rightPointer-leftPointer);
        area = Math.max(area,tempArea)
        if (height[leftPointer] <= height[rightPointer]) leftPointer++;
        else rightPointer--;
    }
    return area;
};