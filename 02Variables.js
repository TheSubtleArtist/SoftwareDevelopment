'use strict';

/*
Variable Rules
-First character is letter, underscore, or dollar sign, no numbers
-Rest of characters: letters, numbers, underscore, dollar sign
-no special characters
-case sensitive
*/

// constant variables are unchangeable
const pi = 3.14159;

let apple; //correct
let _apple; //correct
let a$$ple; //correct
let $pple; // correct
// let @pple// incorrect

let stringVariable = "This is how to create and assigne a string variable.";
let numberVariable = 22;
let booleanVariable = true;

// log the value of a variable to the console
console.log(stringVariable);


// infinity and NaN (not a number) data types
let varInfinit = 1/0; // becomes an infinity; once an inifinity exists, no other function will alter the value
let varNotNumber = stringVariable/numberVariable; // creation of a NaN cannot be altered

// concatenate
let favFruit = "Blueberry";
console.log("My favorite fruit is a " +favFruit+".");
// concatenate with backticks
console.log(`My favorite fruit is the ${favFruit}.`);
alert(`My favorite fruit is the ${favFruit}.`);

// math inside of backticks
alert(`1 + 2 = ${1+2}.`);