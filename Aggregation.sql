-- Query the two cities in STATION with the shortest and longest CITY names, as well as their respective lengths (i.e.: number of characters in the name). 
-- If there is more than one smallest or largest city, choose the one that comes first when ordered alphabetically.
select city, length(city) from station order by length(city) asc, city asc limit 1;
select city, length(city) from station order by length(city) desc, city asc limit 1;

-- Query the total population of all cities in CITY where District is California.
select sum(population) from ciyt where distict = "california";

-- Query the average population of all cities in CITY where District is California.
select avg(population) from city where district = 'california';


-- Query the average population for all cities in CITY, rounded down to the nearest integer.
select floor(avg(population)) from city;

-- Query the sum of the populations for all Japanese cities in CITY. The COUNTRYCODE for Japan is JPN.
select sum(population) from city where countrycode = 'jpn';

-- Query the difference between the maximum and minimum populations in CITY.
select (max(population) - min(population)) from city;


-- We define an employee's total earnings to be their monthly salary x months worked.
-- The maximum total earnings to be the maximum total earnings for any employee in the Employee table. 
-- Write a query to find the maximum total earnings for all employees as well as the total number of employees who have maximum total earnings. 
-- Then print these values as  space-separated integers.
-- in the answer below, the "*" can be replaced with any other column. You just need someting to count.
-- The important point is group by
select (salary*months), count(*) from employee group by (salary*months) order by (salary*months) desc limit 1;

-- Query the sum of Norther Latitudes (LAT_N) from station having values greater tahn 38.7880 and less than 137.2345
select truncate(SUM(LAT_N), 4) from station where 38.7880 < LAT_N and LAT_N < 137.2345;

-- Query the western longitude (LONG_W) for the largest Northern Latitutde (LAT_N) in station that is less than 137.2345. round your answer to four decimal places
select round(LONG_W, 4) from station where LAT_N < 137.2345 order by LAT_N desc limit 1;

-- Query the smallest Norther latitude (LaT_N) from station that is greater than 38.7780 and roud the answer to four decimal places
select round(LAT_N, 4) from station where LAT_N > 38.7780 order by LAT_N asc limit 1;

-- Query the western longitude (Long_w) where the smallest Northern Latitude (LAT_N) in station is greater than 38.77780
select round(long_w, 4) from station where LAT_N > 38.7780 order by LAT_N limit 1;
