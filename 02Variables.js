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


// data structures
let arrayObject = [1, "a", 2, "b", 3, "object"];
let dictObject = {key1:"attribute1", key2:"attribute2"}

// calling the type of a variable when the data type could be unknown in a dynamic variable language
let dynVariable = "a value";
console.log(typeof dynVariable);

// assigne a variable as undefined means undefined is both value and type
let undefVariable = undefined;
console.log(undefVariable);
console.log(typeof undefVariable);

//Type Conversions - String - Using predefined type conversions

let numVar = 1;
console.log(numVar);
console.log(typeof numVar);
// convert to string
numVar = String(numVar);
console.log(numVar);
console.log(typeof numVar);

let booVar = true;
console.log(booVar);
console.log(typeof booVar);
booVar = String(booVar); // becomes "true" not true / 1
console.log(booVar);
console.log(typeof booVar);


// Type Conversion - Number Conversions

let strVar = "5"
console.log(strVar);
console.log(typeof strVar);
//convert to number
strVar = Number(strVar);
console.log(strVar);
console.log(typeof strVar);

// Boolean conversion

let newBooVar = 1; // any number other than 0 becomes true; any string other than 0 becomes true
console.log(newBooVar)
console.log(typeof newBooVar);

newBooVar = Boolean(newBooVar);
console.log(newBooVar)
console.log(typeof newBooVar);


let newerBooVar = 0;
console.log(newerBooVar)
console.log(typeof newerBooVar);

newerBooVar = Boolean(newerBooVar);
console.log(newerBooVar)
console.log(typeof newerBooVar);


// Alert, Prompt, and Confirm Boxes

alert("This Alert Box");
alert(newerBooVar);
alert(`My favorite fruit is the ${favFruit}.`);


// Prompt Box

//let variable = prompt("String to display to user", defalut_value )
let age = prompt("Enter the age", 21);
console.log(age);
console.log(typeof age);
alert(`Your age is ${age}`);

// Confirm Box

let confirmVar = ("Do you really need to buy this expensive chocolate?")
console.log(confirmVar)
console.log(typeof confirmVar);
