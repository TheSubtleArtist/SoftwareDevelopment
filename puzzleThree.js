'use strict';

function expandedForm(num) {
    num = num.toString().split().reverse().join('');
    let arr =[];
    let string = '';
    for (let i=0; i<num.length; i++){
        let temp = parseInt(num.charAt(i)) * Math.pow(10,i);
        if (temp !=0) {
            arr.push(temp);
        } 
    }
    for (let i = arr.length - 1; i>=0; i--){
        if (i==0){
            return string.concat(arr);
        }
        string = string.concat(arr[i]," + ");
    }
}

console.log(expandedForm(594));