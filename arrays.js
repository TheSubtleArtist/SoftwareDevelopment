'use strict';

// Declare Arrays

let arrayOne = new Array();
let arrayTwo = new Array();
arrayOne = ["one", "two", "three", "four", "five"];
arrayTwo = [1, 2, 3, 4, 5];

for (let i = 0; i < arrayOne.length; i++) {
    console.log(arrayOne[i], ": ", arrayTwo[i] );
}

// ARRAY METHODS
arrayOne.push("six");
arrayTwo.push(6);

for (let i = 0; i < arrayOne.length; i++) {
    console.log(arrayOne[i], ": ", arrayTwo[i] );
    if (i == 5) {
        arrayTwo[0] = 7;
        arrayOne[0] = "seven";
    }
}
console.log (arrayOne[0], ":", arrayTwo[0]);


// TWO-DIMENSIONAL ARRAYS

let twoDimArray = [ [1, 2, 3],["one", "two", "three"],["four", 4, "sticky"]];

for (let a = 0; a <= twoDimArray.length; a ++) {
    console.log(`position ${a}: `, twoDimArray[a]);
}