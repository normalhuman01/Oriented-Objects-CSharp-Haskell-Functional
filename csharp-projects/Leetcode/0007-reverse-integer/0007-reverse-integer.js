/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var sign = x < 0 ? -1 : 1;
    var num = Math.abs(x).toString();
    num = num.split("");
    num = num.reverse();
    num = num.join("");
    if ((Math.abs(num) > Math.pow(2,31)-1)) {
        return 0;
    }
    else {
        return sign * num;
    }
};