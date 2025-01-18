'use strict';

/**
 * User input: Principle amount, interest rate, years
 * Convert to numbers
 * Calculate and display compount interst
 */

let p = prompt("Enter the principle amount");
let t = prompt("PLease enter the number of years");
let r = prompt("Please enter the annual interst rate.");

p = Number(p);
t = Number(t);
r = Number(r);

function compoundInterest(principle=10000, years=5, rate=4.12) {
    if (principle <=0 || rate <= 0 || years <= 0) {
        alert("invalid entries.")
        return;
    }
    else {
        return(Math.pow((1+(rate/12)),(12*years)));
        //const totInterest = totAmount - principle;
    }
    
}

document.write(compoundInterest(p, t, r).toFixed(2));
