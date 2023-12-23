/**
 * @param {string} s
 * @param {string[]} words
 * @return {number[]}
 */
var findSubstring = function(s, words) {
    let result = [];
    const substringLength = words[0].length * words.length;
    const regex = new RegExp(".{" + words[0].length + "}", 'g');
    let wordsChecked, checkWords;
    words = words.sort();
    for(let i = 0; i <= s.length - substringLength; i++) {
        checkWords = s.substring(i, i + substringLength).match(regex).sort();
        wordsChecked = true;
        for(let k = 0; k < words.length; k++) {
            if(words[k] !== checkWords[k]) {
                wordsChecked = false;
                break;
            }
        }
        if(wordsChecked) result.push(i);
    }
    return result;
};