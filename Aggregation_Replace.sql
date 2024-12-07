/*
Samantha was tasked with calculating the average monthly salaries for all employees in teh EMPLOYEES table.
She did not realize her keyboard's 0 key was broekn until after completing the calcualtion.
She wants help finding the difference between her miscalculation (using salaries with any zeroes removed), and the actgual average salary

Write a query calculating the amoutn of error (the difference between actual and miscalculated monthly salaries) and round up to the next integer
*/

select ceil((avg(salary) - avg(REPLACE(salary, '0', '')))) from employees;