'use strict';

let varMath = 256.745321569345;

console.log(Math.round(varMath));
console.log(Math.ceil(varMath));
console.log(Math.pow(varMath, 2));
console.log(Math.sqrt(varMath, 2));
console.log(Math.trunc(varMath));
console.log(Math.sin(varMath));
console.log(Math.cos(varMath));
console.log(Math.tan(varMath));

let arrMath = new Array()
for (let m = 1; m < 10; m++) {
    arrMath[m] = Number(Math.ceil(Math.random() * 10));
    console.log(arrMath[m]);
}
console.log("Minimnum: ", Math.min(arrMath));



