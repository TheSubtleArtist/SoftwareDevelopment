/*
Write a query identifying the type of each record in the TRIANGLES table using its three side lengths. 
Output one of the following statements for each record in the table:

Equilateral: It's a triangle with  3 sides of equal length.
Isosceles: It's a triangle with  2 sides of equal length.
Scalene: It's a triangle with  3 sides of differing lengths.
Not A Triangle: The given values of A, B, and C don't form a triangle.

*/

SELECT CASE
    WHEN 2 * GREATEST(A, B, C) >= (A + B + C) THEN "Not A Triangle"
    WHEN A = B AND A = C                      THEN "Equilateral"
    WHEN A = B OR A = C OR B = C              THEN "Isosceles"
                                              ELSE "Scalene"
    END
FROM TRIANGLES


/*
You are given a table, BST, containing two columns: 
N and P, where N represents the value of a node in Binary Tree, and P is the parent of N.

Write a query to find the node type of Binary Tree ordered by the value of the node. Output one of the following for each node:
Root: If node is root node, has no parent
Leaf: If node is leaf node, has no child
Inner: If node is neither root nor leaf node, has parent and child
*/
select case
    -- comparing for null requires "IS" cannot be "="
    when P is null THEN concat(N, " Root")
    -- identify all unique values in P column and check if N matches any of those
    -- A value in both columns means there is both a parent and child
    when N in (select distinct P from BST) Then concat(N, " Inner")
    -- when all else fails
    else concat(N, " Leaf")
    end
from BST 
order by N asc;



/*
Pivot the Occupation column in OCCUPATIONS so that each Name is sorted alphabetically and displayed underneath its corresponding Occupation. 
The output column headers should be Doctor, Professor, Singer, and Actor, respectively.
Note: Print NULL when there are no more names corresponding to an occupation.

PIVOT
*/

-- Create row number index values
SET @r1=0, @r2=0, @r3=0, @r4=0;

-- Selections
-- MIN or MAX returns the same results
-- Returns the names, but not the NULL values from the temporary table
-- Null will always be less than MIN or MAX
SELECT MIN(Doctor), MIN(Professor), MIN(Singer), MIN(Actor)
-- about to create a temporary table as TEMP_TABLE
FROM(
SELECT CASE 
    -- increments the variable
    -- tracks how many rows there are for each respective occupation
    WHEN Occupation = "Doctor" THEN (@r1:=@r1+1)
    WHEN Occupation = "Professor" THEN (@r2:=@r2+1)
    WHEN Occupation = "Actor" THEN (@r3:=@r3+1)
    WHEN Occupation = "Singer" THEN (@r4:=@r4+1)
    END AS RowNumber,
    
    CASE WHEN Occupation = 'Doctor' THEN Name END AS Doctor,
    CASE WHEN Occupation = 'Professor' THEN name END AS Professor, 
    CASE WHEN Occupation = 'Singer' THEN name END AS Singer,
    CASE WHEN Occupation = 'Actor' THEN name END AS Actor
FROM Occupations
ORDER BY Name
    ) AS TEMP_TABLE
-- 
GROUP BY RowNumber
;

