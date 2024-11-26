'use strict';

// DECLARING OBJECTS

const personOne = new Object();
personOne.firstName="John";
personOne.lastName="Doe";
personOne.age = 50;
personOne.eyeColor="green";
personOne.height = "5 ft.";
personOne.weight = "190 lbs.";

function personTwo(first, last, age, eye, height, weight) {
    this.firstName = first;
    this.lastName = last;
    this.age = age;
    this.eyeColor = eye;
    this.height = height;
    this.weight = weight;
    this.wave = function(){console.log(`Hi, ${this.firstName} is waving at you!~`);}
    this.officialName = this.lastName + ", " + this.firstName;
}

const myFather = new personTwo("John", "Doe", 65, "blue", "6 ft.", "210 lbs.");
const myMother = new personTwo("Mary", "Doe", 62, "green", "5 ft.", "145 lbs.");
console.log(myFather.firstName);
console.log(myMother.firstName);
myFather.wave();
console.log(myMother.officialName);

