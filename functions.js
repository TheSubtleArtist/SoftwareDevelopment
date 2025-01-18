'use strict';


function HelloWorld() {
    console.log("Hello World Function");
};

function varSums(valOne, valTwo) {
    let valSum = valOne + valTwo
    return valSum;
};

HelloWorld();

let numOne = Math.trunc(Math.random() * 10);
let numTwo = Math.trunc(Math.random() * 10);
let numThree = varSums(numOne, numTwo);
console.log(numThree);


// DEFAULT VALUES

function varDefVals(valOne = 10, valTwo = 5) {
    let valSum = valOne + valTwo
    return valSum;
};
console.log("Use of Default Values: ", varDefVals());

function varDefValsTwo(valOne = 10, valTwo = varSums(numOne, numTwo)) {
    let valSum = valOne + valTwo
    return valSum;
};
console.log("Use of function in Default Values: ", varDefValsTwo());

// MULTIPLE LINE RETURNS

function varDefValsThree(valOne = 10, valTwo = varSums(numOne, numTwo)) {
    let valSum = valOne + valTwo
    return (`The answer is ${valSum}`);
};
console.log(varDefValsThree());


// FUCTION (ANONYMOUS) EXPRESSIONS


let anonFunct = function(paramOne=5, paramTwo=6) {
    console.log(paramOne);
    console.log(paramTwo);
};
console.log(anonFunct);
console.log(anonFunct());
anonFunct();


//SELF-INVOKING FUNCTIONS

(function() {console.log("this is a self-invoking function")})();


//AAROW FUNCTION

let arrowFunction = () => {console.log("Here is the arrow function");}
console.log(arrowFunction());
arrowFunction();

let addArrow = (a=1, b=2) => a + b;
console.log("Arrow Function: ", addArrow());
console.log("Next Arrow Function: ", addArrow(5, 6));

// ARGUEMENTS OBJECT

function addNums() {
    let sum = 0;
    for(let i = 0; i< arguments.length; i++) {
        sum =+ arguments[i];
    }
    return sum;
}

let valSum = addNums(1, 5, 4, 8, 9, 10, 50, 15, 4, 6, 8, 9);
console.log("Arguements Object: ", valSum);

// RECURSIVE FUNCTIONS
console.log("recursion");
function sumAdd(n=5){
    let recSum = 0;
    for (let i = 1; i <= n; i++) {
        recSum += i;
        console.log( "sum ", i, "is: ", recSum);
    };
    return;
};
sumAdd(10);

function recursAdd(r=5) {
    if (r == 1) { return r;}
    return r + recursAdd(r - 1);
}
console.log(recursAdd(10));

// ARRAY ELEMENTS INTO ARGUMENT FUCNTIONS
console.log("array lements as arguements");

let argArray = new Array();
for (let g = 0; g < 3; g++) {
    argArray[g] = Math.trunc(Math.ceil(Math.random() * 10));
    console.log(argArray[g]);
}

let argNegArray = new Array();
for (let y = 0; y < 3; y++) {
    argNegArray[y] = Math.trunc(Math.ceil(Math.random() * -10));
    console.log(argArray[y]);
}

function addArray(arg1, arg2, arg3) {
    let sum = arg1 + arg2 + arg3
    return sum;
}
console.log("the sum: ", addArray(...argArray));
console.log("the neg sum: ", addArray(...argNegArray));

console.log("Max: ", Math.max(...argArray));
console.log("Min: ", Math.max(...argNegArray));
console.log("Min: ", Math.min(...argArray, ...argNegArray));

let combiArray = new Array();
combiArray = [...argArray, ...argNegArray];

//REST PARAMETERS
console.log("REST PARAMETERS");

function addRestArray(...array) {
    let sum = 0;
    for (let each of array) {
        sum += each;
    }
    return sum;
}
console.log("Rest Array: ", addRestArray(...argArray));


// SCHEDULING FUNCTION EXECUTIONS
console.log("SCHEDULING FUNCTIONS - SET TIMEOUT");

setTimeout(HelloWorld, 5000);

// SET INTERVAL
console.log("Set Interval")

function kaBoom() {
    let b = 10;
    while (b <= 0) {
        console.log
    }
}




