'use strict';

let strRegEx = "This is a Sample string that contains both a date, 01-10-2025, and a sample Phone number (402) 555-1212.";
document.write(strRegEx);
let rexPat1 = /sample/ig;
let strRepl = "sAmPlE"

// TEST METHOD

console.log("Test Method: ",rexPat1.test(strRegEx));
document.write("Test Method: ",rexPat1.test(strRegEx),"<br>");

// MATCH METHOD

console.log("Match Method: ",strRegEx.match(rexPat1));
document.write("Match Method: ",strRegEx.match(rexPat1), "<br>");

// USING REGULAR EXPRESSION IN SEARCH AND REPLACE FUNCTIONS

document.write("Search Method: ",strRegEx.search(rexPat1), "<br>"); // returns an index value
document.write("Replace Method: ",strRegEx.replace(rexPat1, strRepl), "<br>");



