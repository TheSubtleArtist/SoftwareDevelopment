'use strict';

/**
 * Rules
 * First letter is always caps
 * iterate thorugh a string
 * even indices uppercase
 * odd indices lowercase
 */


let strTest = "Here is the big fat hairy string."
let arrTest = strTest.split(' ');

function alternateCaps(string) {
    for (let i = 0; i < arrTest.length; i++) {
        let strSub = arrTest[i].split('');
        for (let j = 0; j < strSub.length; j++) {
            if (j % 2 == 0) {
                strSub[j] = strSub[j].toUpperCase();
            }
            else {
                strSub[j] = strSub[j].toLowerCase();
            }
            arrTest[i] = strSub.join('');
        }

    }
    return arrTest.join(' ');
}

let puzHeaderOne = document.getElementById("h1");
puzHeaderOne.innerHTML = alternateCaps(strTest);