'use strict';

// Quotes within Strings

let backtickQuote = `"Hello there! How are you?", said John."`;
console.log(backtickQuote);
alert(backtickQuote);

let singleQuote ="'Hello there! How are you?', said John.";
alert(singleQuote);
console.log(singleQuote);

// Escape Characters for Complicated Strings

let backQuote = "\"Jello there \'mate\'! How are you?\", said John.";
alert(backQuote);
console.log(backQuote);


// Strings as objects

let newString = new String("Hello there!");
// functionally the same as
// let newString = "Hello there!";
let newStringTwo = "Hello there!";
console.log(typeof newString)
console.log(typeof newStringTwo)
console.log("Note the first is an object, the second is simply a string.")

let newStringThree = new String("Hello there you worthless dummy. Say Hi to my little friend, dummy!");

alert(newString === newStringThree); // turns out to be false because the browser sees these as differnet object, regardless of value.

//String Properties

console.log(newString.length)

// Find characters at and index
console.log("Character At: ",newStringThree.charAt(22));
console.log("Character Code at: ", newStringThree.charCodeAt(22));

// index starting position of substring
console.log("IndexOf: ", newStringThree.indexOf("worthless")); // finds only the first occurrence
console.log("Last Index Of: ", newStringThree.lastIndexOf("worthless")) // returns last occurrence
console.log("Index of beginning at a predetermined index: ", newStringThree.indexOf("dummy", 27)) // first occurence after position 27
console.log(newStringThree.lastIndexOf("worthless", 60)) // returns last occurrence but starts the search at the 60th position and moves toward the front of hte object

// substring - Slice
// string.slice(starting position, ending position)
console.log("slice from left: ", newStringThree.slice(16, 32)); // from the left
console.log("slice from right: ", newStringThree.slice(-32, -16)); //from the right
let newSubString = newStringThree.slice(16,31);

console.log("search: ",newStringThree.search("dummy"));


console.log("substring method does not accept negative parameters: ", newStringThree.substring(16,31))
console.log("substring method does not accept negative parameters: ", newStringThree.substring(33))

// string.substr(starting position, length of substring)
console.log("substr method accepts negative parameters: ", newStringThree.substr(25,6))
console.log("substr method accepts negative parameters: ", newStringThree.substr(-14,6))


// replacing method
console.log(newStringThree.replace("dummy", "git")); // replaces only the first occurrence
console.log(newStringThree);
console.log(newStringThree.replace(/dummy/g, "git")); // global replacement requires a bit more regex

// Case Conversion
console.log(newStringThree.toLowerCase());
console.log(newStringThree.toUpperCase());

//Concatenation
console.log("concat with math: ", newString + " " + newStringTwo);
console.log(newString.concat(" ", newStringTwo));
console.log(newString.concat(" ", newStringTwo, " ", "All the good strings!"));


// Trimming
let newStringFour = new String("  This string has   extra spaces on either     end.     ");
console.log(newStringFour.trim());

// Convert String to Array
let stringArray = backtickQuote.split(" ");
console.log(stringArray);
console.log(stringArray[3]);
let joinString = stringArray.join(" ");
console.log(joinString);