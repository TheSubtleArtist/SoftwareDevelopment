'use strict';


function checkPalindrome(str) {
    let reverse = str.split('').reverse().join('');
    if (reverse == str) {
        return true;
    }
    else {
        return false;
    }
}

console.log(checkPalindrome("aabbaa"));