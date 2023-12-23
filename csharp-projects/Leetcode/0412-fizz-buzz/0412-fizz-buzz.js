/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    let fizzBuzzStringArray = [];
    for(i=1; i<= n; i++){
        if(i%3 === 0 && i%5 === 0){
            fizzBuzzStringArray.push("FizzBuzz");
        }
        else {
            if(i%3 === 0){
                fizzBuzzStringArray.push("Fizz");
            }
            else if(i%5 === 0){
                fizzBuzzStringArray.push("Buzz");
            }
            else {
                fizzBuzzStringArray.push("" + i);
            }
        }
    }
    return fizzBuzzStringArray;
};