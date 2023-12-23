/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    haystack = haystack.split(needle);
    if(haystack.length > 1) return haystack[0].length;
    else return -1;
};