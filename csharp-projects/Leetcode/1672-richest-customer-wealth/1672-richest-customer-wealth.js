/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let maxWealth = 0;
    let wealth = 0;
    accounts.forEach((account) => {
        wealth = account.reduce((accumulator, value) => {
            return accumulator + value;
        })
        maxWealth = maxWealth < wealth ? wealth : maxWealth;
    })
    return maxWealth;
};