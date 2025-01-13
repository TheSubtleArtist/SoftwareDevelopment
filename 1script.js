console.log("the Beginning")
console.dir(document);
var b1 = "Hello World 4";
var exOneMessage='Hello World 5';
var d1=0

var person = {
    fname:"fnameValue",
    lname:"lnameValue",
    hair:"blond",
    height:60

};
var arrayOne = ["position0", "position1", "position2", 3, 4, 5];
//alert('hello world 1')
// Comments
/*
Multi
Line
Comments
 */
// functions section


function funMessage(someVariable){
    d1++;
    document.querySelector('#functionHead').innerHTML=someVariable + d1 + " times.";

}

function updatePerson(){
    document.querySelector('#person').innerHTML=person.lname+", "+person.fname;
}

var conditional1=10;
var conditional2=10;
function funConditional1(variable1, variable2){
    if (variable1 > variable2) {document.write("Eureka")}
    else if (variable1 == variable2) {document.write("nope")}
    else {document.write("wrongo moosebreath!")}
}

function funSwitch(someValue){
    switch(someValue){
        case "one": document.write("One"); break;
        case "two": document.write("Two"); break;
        case "three": document.write("Three"); break;
        default: document.write("Try Again Dummy");
    }
}

var g1=0;
function funWhileLoop(){
    document.write("This is my  while loop.","<br>");
    while(g1<10){
        document.write(g1,"<br>");
        g1++;
    }
}


function funDoLoop(someNumber){
    workerBee=someNumber;
    document.write("This is the Do Loop that is guaranteed to execute <br> a minimum of one time.", "<br>");
    do{
        document.write(workerBee,"<br>");
        workerBee++;
    }
    while(workerBee < someNumber + 10);
}

//String Methods
testStringOne="This is a test string.";
function funStringMethods(testString){
    document.write("String Length: ",testString.length,"<br>");
    document.write("Indext of 'test': ",testString.indexOf('test'),"<br>");

}

function funFindSubString(bigString, subString){
    var check = bigString.indexOf(subString);
    if (check<0)
        {alert("Substring not in test string.");}
    else {document.write("Substring is found in the teststring at position: ", check);}
}


//Document Object Model
function funUpdateDomButton(){
    let temp=document.getElementById('domInput');
    console.log(temp.value);
    document.querySelector('#domPlaceholder').innerHTML=temp.value;

}

//Event Listenders
/*
const myClicky = document.querySelector('#eventButton');
const myWrity = document.querySelector('#eventHeader');
myClicky.addEventListener('click',message)
*/
function message(){
    let temp=document.getElementById('eventInput');
    output(temp.value)
}
function output(mess){
    myWrity.innerHTML=mess;
}




