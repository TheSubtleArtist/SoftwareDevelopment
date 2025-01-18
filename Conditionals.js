'use strict';

// IF-ELSE STATEMENTS

let numOne = prompt("Enter a number", 5);
let numTwo = prompt("Enter another number", 5);
if( numOne > numTwo) {
    console.log("The first number you entered is greater than the second number.");
}
else if (numOne < numTwo) {
    console.log("The second number you entered is greater than the first number.");
}
else {
    console.log("The numbers you entered are equal.")
}

// SWITCH STATEMENTS

let numInput = prompt("Enter a number less than 6", 5)
console.log(typeof numInput);
numInput = Number(numInput);
console.log(typeof numInput);
switch( numInput ) {

    case 1: 
        console.log("You have blown up the world");
        break;
    case 2: 
        console.log("You have blown up the world.");
        break;
    case 3: 
    console.log("You have blown up the world.");
        break;
    case 4: 
        console.log("You disarmed the bomb and saved the world");
        break;
    case 5: 
    console.log("You have blown up the world.");
        break;
    default: 
        console.log("You have entered and invalid character.");
        break;

}

let numSecret = 4;
numSecret = Number(numSecret);
console.log(typeof numSecret);
let numInputTwo = prompt("Enter a number less than 6.", 5)
console.log(typeof numInputTwo);
numInputTwo = Number(numInputTwo);
console.log(typeof numInputTwo);
switch( numInputTwo, numSecret ) {

    case numInputTwo > numSecret: 
        console.log("You have blown up the world");
        break;
    case numInputTwo < numSecret: 
        console.log("You have blown up the world.");
        break;
    case numInputTwo == numSecret: 
        console.log("You disarmed the bomb and saved the world");
        break;
    default: 
        console.log("You have entered and invalid character.");
        break;

}


// FOR LOOP

for (let i = 0; i <= 10; i++) {
    console.log(`The Number is ${i}.`);
}

for (let i = 0, sum = 0; i <= 10; i++) {
    console.log(`Sum is ${sum}.`);
    sum += i;
}


// WHILE LOOPS
let numWhile = Number(0);
while (numWhile < 10) {
    console.log ("numWhile: ", numWhile);
    numWhile++;
}

// DO WHILE LOOPS

do {
    console.log ("numWhile: ", numWhile);
    numWhile--;
}
while (numWhile >= 0);


// BREAK
for (let i = 0; i <= 10; i++) {
    console.log(`Break is ${i}.`);
    if (i == 6) {
        console.log("breaking the if");
        break;
    }
    console.log("in the for")
}
console.log("finished");

// CONTINUE
for (let i = 0; i <= 10; i++) {
    console.log(`Continue is ${i}.`);
    if (i == 6) {
        console.log("breaking the if");
        i++;
        continue;
    }
    console.log("in the for")
}
console.log("finished");

for (let i = 0; i <= 10; i++) {
    console.log(`For Continue is ${i}.`);
    if (i == 6) {
        console.log("here is the continue");
        continue;
    }
}

// LABELS

let str = '';

loop1: for (let i = 0; i < 5; i++) {
  if (i === 1) {
    continue loop1;
  }
  str = str + i;
}

console.log(str);
// Expected output: "0234"