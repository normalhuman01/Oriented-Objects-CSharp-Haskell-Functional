/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    let nums3 = [];
    let nums1Iterator = 0;
    let nums2Iterator = 0;
    for(let i=0; i<=Math.ceil((nums1.length+nums2.length)/2); i++) {
        if(nums2[nums2Iterator] == undefined || nums1[nums1Iterator] < nums2[nums2Iterator]) {
            nums3[i] = nums1[nums1Iterator];
            nums1Iterator++;
        }
        else {
            nums3[i] = nums2[nums2Iterator];
            nums2Iterator++;
        }
    }
    return (nums1.length+nums2.length)%2 != 0 ? nums3[nums3.length-2] : (nums3[nums3.length-2]+nums3[nums3.length-1])/2;
};