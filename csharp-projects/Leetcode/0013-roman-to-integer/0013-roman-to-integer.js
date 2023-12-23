/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let characterArray = s.split("");
    let characterValue = 0;
    let prevCharacterValue = 10000;
    let totalValue = 0;
    let addBoolean = false;
    characterArray.forEach((characterItem, index) => {
        characterValue = value(characterItem);
        characterValue = characterValue <= prevCharacterValue ? characterValue : characterValue-2*prevCharacterValue;
        totalValue += characterValue;
        prevCharacterValue = characterValue;
    })
    return totalValue;
};
var value = function (character) {
    switch(character){
        case "I": return 1;
        case "V": return 5;
        case "X": return 10;
        case "L": return 50;
        case "C": return 100;
        case "D": return 500;
        case "M": return 1000;
    }
};