/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    let containsStringFlag = true;
    ransomNoteArray = ransomNote.split("");
    ransomNoteArray.forEach((ransomNoteCharacter) => {
        if(magazine.includes(ransomNoteCharacter) && containsStringFlag) {
            magazine = magazine.replace(ransomNoteCharacter, "");
            containsStringFlag = true;
        }
        else {
            containsStringFlag = false;
        }
    })
    return containsStringFlag;
};