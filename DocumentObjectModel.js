'use strict'

console.log(document.getElementById("paragraph1"));

let strPara1 = document.getElementById('paragraph1');
console.log(strPara1);

strPara1.innerText = "Writing Inner Text";
console.log(strPara1);

document.getElementById('paragraph1').innerText = "Writing Different Inner Text";

// RETIREVING MULTIPLE ELEMTNS BY TAG NAME

let varMultipleTags = document.getElementsByTagName('p');
console.log("object: ",varMultipleTags);
console.log("zero: ",varMultipleTags[0]);
console.log("one: ",varMultipleTags[1]);
varMultipleTags[2].innerText = "Changed this element.";




//RETRIEVING MULTPLE ELEMENTS BY CLASS NAME
let eleClass = document.getElementsByClassName("grp");
console.log(eleClass);

// GETTING HTML OUTPU8TS VIA THE DOM AND CHANGING HTML

document.write("This is my document.write" + "<br/>");
document.write(98/2 + ": concatenate with document.write" + "<br/>");

let strPara2 = document.getElementById('paragraph1');
console.log(strPara2);
strPara2.innerHTML = "Demonstrating innerHTML";

let varDiv2 = document.getElementById("div2");
varDiv2.innerHTML = "Hello There!";

//CHANGING THE VALUE OF HTML ATTRIBUTES

let varLink = document.getElementById("link");
varLink.href ="https://www.bing.com";
varLink.innerText = "Try Bing";

//CHANGING THE CSS PROPERTIES OF ELEMENTS

let stlConfirm = confirm("Do you want to change the color of the link?")
if(stlConfirm == true){
    varLink.style.color = "green";
}


// EVENTS and EVENT LISTNERS - the CLICK EVENT

function buttonClick() {
    console.log("You Clicked the Button!");
}

let button1 = document.getElementById("button1");
button1.addEventListener("click", buttonClick);

// EVENTS AND EVENT LISTENERS - MULTIPLE MOUSE AND KEY EVENTS

//onChange
//onMouseOver
//onMouseOut
//onKeyDown
//onLoad
//onMouseDown

let mouseTest = document.getElementById("mouseTest");
mouseTest.addEventListener("mousedown", downEvent);
mouseTest.addEventListener("mouseup", upEvent);
mouseTest.addEventListener("mouseenter", enterEvent);
mouseTest.addEventListener("mouseleave", exitEvent);

function downEvent() {
    mouseTest.style.backgroundColor = "black";
}

function upEvent(){
    mouseTest.style.backgroundColor = "green";
}

function enterEvent(){
    mouseTest.style.backgroundColor = "purple";
}
function exitEvent(){
    mouseTest.style.backgroundColor = "orange";
}