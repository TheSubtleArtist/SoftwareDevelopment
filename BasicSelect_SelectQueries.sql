
-- Query all columns (attributes) for every row in the CITY table.
select * from city;

-- Query all columns for all American cities in the CITY table with populations larger than 100000. The CountryCode for America is USA.
select * from CITY where countrycode = 'USA' and population > 100000;

-- Query the NAME field for all American cities in the CITY table with populations larger than 120000. The CountryCode for America is USA.
select name from city where countrycode = 'usa' and population > 120000;

-- Query all columns for a city in CITY with the ID 1661.
select * from city where id = '1661';

-- Query all attributes of every Japanese city in the CITY table. The COUNTRYCODE for Japan is JPN.
select * from city where countrycode = 'jpn';

-- Query a list of CITY and STATE from the STATION table.
select city, state from station;

-- Query the following two values from the STATION table:
-- The sum of all values in LAT_N rounded to a scale of  decimal places.
-- The sum of all values in LONG_W rounded to a scale of  decimal places.
select round(sum(LAT_N), 2), round(sum(LONG_W), 2) from station;

-- Query a list of CITY names from STATION for cities that have an even ID number. Print the results in any order, but exclude duplicates from the answer.
select distinct city from station where id % 2 = 0;

-- Find the difference between the total number of CITY entries in the table and the number of distinct CITY entries in the table.
select (count(city) - count(distinct city)) from station;




