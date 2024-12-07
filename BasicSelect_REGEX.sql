-- Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.
SELECT DISTINCT city FROM station WHERE city REGEXP "^[aeiou].*";

-- Query the list of CITY names ending with vowels (a, e, i, o, u) from STATION. Your result cannot contain duplicates.
SELECT DISTINCT city FROM station WHERE city REGEXP "[aeiou]$";

-- Query the list of CITY names from STATION which have vowels (i.e., a, e, i, o, and u) as both their first and last characters. 
-- Your result cannot contain duplicates.
SELECT DISTINCT city FROM station WHERE city REGEXP "^[aeiou].*[aeiou]$";

-- Query the list of CITY names from STATION that do not start with vowels. Your result cannot contain duplicates.
SELECT DISTINCT city FROM station WHERE city REGEXP "^[^aeiou].*";

-- Query the list of CITY names from STATION that do not end with vowels. Your result cannot contain duplicates.
SELECT DISTINCT city FROM station WHERE city REGEXP "[^aeiou]$";

-- Query the list of CITY names from STATION that either do not start with vowels OR do not end with vowels. Your result cannot contain duplicates.
SELECT DISTINCT city FROM station WHERE city REGEXP "^[^aeiou]" OR  city REGEXP "[^aeiou]$";

-- Query the list of CITY names from STATION that do not start with vowels and do not end with vowels. Your result cannot contain duplicates.
SELECT DISTINCT city FROM station WHERE city REGEXP "^[^aeiou]" AND  city REGEXP "[^aeiou]$";


