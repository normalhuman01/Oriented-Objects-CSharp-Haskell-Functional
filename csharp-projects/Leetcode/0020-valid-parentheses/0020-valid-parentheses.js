/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    var openParentheses = ['(','[','{'];
    var closeParentheses = [')',']','}'];
    var parenthesesStack = [];
    s = s.split("");
    s.forEach((item) => {
        if(openParentheses.includes(item)) {
            parenthesesStack.push(item);
        }
        else if(parenthesesStack[parenthesesStack.length - 1] === openParentheses[closeParentheses.indexOf(item)]) {
            parenthesesStack.pop();
        }
        else {
            parenthesesStack.push(item);
        }
    })
    return parenthesesStack.length === 0;
};