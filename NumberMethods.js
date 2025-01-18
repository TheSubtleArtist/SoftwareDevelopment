'use strict';

// Introduction to Numbers in JavaScript
// JS integers only accurate up to 15 digits
// JS floating point only accurate up to 17 digits

// ARITHMETIC OPERAITONS WITH STRINGS AND NUMBERS (CONCATENATION AND TYPE CONVERSIONS)

console.log( 10 + 20 + " hello " + 10 + 10);
console.log(10 * "20");
console.log("13" - 3);
console.log(2 * 'HI')

console.log(isNaN(2*4));
console.log(isNaN(2 * "4"));
console.log(isNaN(2 * "hello"));

// NUMBERS AS OBJECTS

let numObject = new Number (100);
console.log(typeof numObject);

// CONVERT NUMBER TO STRING

let numString = 51;
let numTenString = numString.toString(10);
let numHexString = numString.toString(16);
let numOctString = numString.toString(8);
let numBinString = numString.toString(2);
console.log ("TEN: ", numTenString, "\nHEX: ", numHexString, "\nOctal: ", numOctString, "\nBinary: ", numBinString);


// EXPONENTIAL METHOD to return a decimal point number after converting an arguement to an exponetnd

let expCandidate = 98.10156348
console.log(expCandidate);
console.log(expCandidate.toExponential(1));
console.log(expCandidate.toExponential(2));
console.log(expCandidate.toExponential(2));
console.log(expCandidate.toExponential(4));
console.log(expCandidate.toExponential(5));
console.log(typeof(expCandidate.toExponential(4)))


//DECIMAL LENGTH
let numFixLen = 6545.85415951965626;
console.log(numFixLen.toFixed(3));
console.log(numFixLen.toFixed(4));
console.log(numFixLen.toFixed(5));
console.log(numFixLen.toFixed(6));

// NUMBER PRECISION
console.log(numFixLen.toPrecision(3));
console.log(numFixLen.toPrecision(4));
console.log(numFixLen.toPrecision(5));
console.log(numFixLen.toPrecision(6));

// CONVERT STRINGS AND DATES TO NUMBERS

let strToNum = Number(numFixLen.toPrecision(4));
console.log(typeof(strToNum), strToNum);

let strDate = new Date("2020-03-12");


// CONVERT NUMBERETED STRING TO AN INTEGER OR FPU

let strNumOne = "485.6542";
console.log("object type: ", strNumOne, " ",typeof(strNumOne));
console.log("ParseInt: ", parseInt(strNumOne));
console.log("ParseFloat: ", parseFloat(strNumOne));





