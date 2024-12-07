-- EXISTS checks for the existence of  records in a subquery
-- correlated query: when the parent query and subquery both reference the same table
-- does not evaluate the subquery first
-- subquery is evaluated for every record in the parent query
-- performs "SELECT...FROM..." then filters based on 'WHERE EXISTS'
-- very inefficient - subquery is executed for each record in the parent query table

SELECT firstName, lastName
FROM customers
WHERE EXISTS
    (SELECT customerId
    FROM orders
    WHERE customerId = customers.customerId);