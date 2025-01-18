// Use strict - ES5 Specification - Only applies to lines of code that appaer AFTER the instantiation
// automated use for classes and modules
'use strict';

// ALERT BOX
alert("Hello World, three")
alert('Hello World, Six')
// CONSOLE LOG, NOT JAVASCRIPT
console.log("Hello World, Four!");
// Update webpage
document.write("Hello World, Five");

/*
Code Structures and Javascript Statements
Multi-Line Comments
*/ 

// VARIABLES

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

//  CONCATENATE
let favFruit = "Blueberry";
console.log("My favorite fruit is a " +favFruit+".");
// concatenate with backticks
console.log(`My favorite fruit is the ${favFruit}.`);
alert(`My favorite fruit is the ${favFruit}.`);

// BACKTICKS
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


// ALERT BOX

alert("This Alert Box");
alert(newerBooVar);
alert(`My favorite fruit is the ${favFruit}.`);


// PROMPT BOX

//let variable = prompt("String to display to user", defalut_value )
let age = prompt("Enter the age", 21);
console.log(age);
console.log(typeof age);
alert(`Your age is ${age}`);

// CONFIRM BOX

let confirmVar = ("Do you really need to buy this expensive chocolate?")
console.log(confirmVar)
console.log(typeof confirmVar);

// ASSIGNMENT OPERATORS
let assignmentVar = "equal sign";

let oneVar, twoVar, threeVar;
oneVar = 1, twoVar = 2, threeVar = 3

let fourVar = 4, fiveVar = 5, sixVar = 6;

// MATHEMATICAL OPERATORS

let a = 5, b = 6, c = 7; 

let d = a + b;
let e = d - c;
let f = c * e;
let g =  f / a;
let h = e % b;
let j = a ** g;
let squareRoot = e ** (1/2); 
console.log(d, e, f, g, h, squareRoot);
let k = prompt("Value One", 4);
let l = prompt("Value Two", 6);
console.log(squareRoot ** k ** (1/l));

console.log ( a += b);
console.log (a -= b);
console.log (a = a%a);


// PRE AND POST INCREMENT OPERATORS

console.log (`a=${a} and a incremented becomes ${a++}`); // can't do increment this way
console.log (b);
// increment happens after the console, but still happens; console outputs 6
console.log (b++);
console.log (b);
// increment happnes before the console../ console output 8
console.log (++b);

// PRE  AND POST DECREMENT OPERATORS

console.log(b);
console.log(b--);
console.log(b)
console.log(--b);


// STING CONCATENATION

let StringOne = "String One";
let StringTwo = "String Two";
console.log(StringOne + " " + StringTwo)

let stringThree = "Hello ";
stringThree += "World";
console.log(stringThree);

// COMPARISON OPERATORS
console.log("Comparison Operators")
console.log(2==2);
console.log(2==3);
console.log(1=="1");
console.log(1 == true);
console.log(0 == true);
console.log(0 == false);
console.log(1 != 2);
console.log(1 != 1);

// check for equlity in terms of value and type
alert("triple equal")
console.log(1 === "1");
console.log(1 === true);
console.log("hello" === "world");
console.log("hello" === "hello");
console.log("1" != 1);

a = 5, b = 6, c = 5;
console.log(a > b);
console.log(a < b);
console.log(a >= b);
console.log( a <= b);
console.log (a <= c);
console.log (a >= c);

// LOGICAL OPERATORS && (AND) || (OR)
alert ("Logical Operators");
console.log ((5 <= 5) || (5 <= 6)); // true
console.log ((5 <= 5) && (5 <= 6)); // false
console.log (!((5 <= 5) && (5 <= 6))); // !true because the first statement and the second statement are both true, but the "not" operator change the true to a false


// TERNARY OPERATORS
alert ("ternary or conditional operators")
// make a comparison and and assign a value if true and another value if false
// variable = (comparison) ? value if true :  value if false;
let ternVarOne = prompt ("Enter your age");
alert((ternVarOne >=18) ? "Adult" : "Child");

// PRECEDENCE
alert("Precedence");
/*
Left to right
()
(()) - innermost first
 post increment / decrement
 pre increment / decrement
 logical NOT (!)
 mutiplication, division, modulus left to right
 addition and subtraction left to right
 bitwise operators, comparison operators, logical operators
 */






