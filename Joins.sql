-- using WHERE clause
-- less extensible than an actual join
SELECT orders.orderId, customers.firstName, customers.lastName, orders.currency, orders.total
FROM orders, customers
WHERE orders.customerId = customers.customerId;

-- INNER JOIN retrieves rows that meet a condition in BOTH tables
-- FROM only one table
-- second table after INNER JOIN statement
-- ON clause is the condition
SELECT orders.orderId, customers.firstName, customers.lastName, orders.currency, orders.total
FROM orders
INNER JOIN customers ON orders.customerId = customers.customerId;

-- LEFT JOIN returns all results from the first table and matching results from the second table
-- shows every customer
-- returns "null" value for columns where there is no value, in this case where any customer has not made an order
SELECT customers.customerId, customers.firstName, customers.lastName, orders.orderId, orders.currency, orders.total
FROM customers
LEFT JOIN orders ON customers.customerId = orders.customerId
ORDER BY customers.customerId ASC;

-- RIGHT JOIN includes matching results from the first tahble and all results form the second table
SELECT customers.customerId, customers.firstName, customers.lastName, orders.orderId, orders.currency, orders.total
FROM customers
RIGHT JOIN orders ON customers.customerId = orders.customerId
ORDER BY customers.customerId ASC;