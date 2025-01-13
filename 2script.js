console.log("the Beginning");
console.dir(document);
const output = document.getElementById('output');
console.log(output);
const testBtn = document.getElementById('testButton');
console.log(testBtn);
testBtn.addEventListener('click',checkValue);

function checkValue(){
    let val = document.querySelector(input[name='myNum']);
    console.log(val);
}
