-- UNION combines the results of two select statements into one


SELECT DISTINCT country AS "countries & currencies" FROM customers
UNION
SELECT DISTINCT currency AS "countries & currencies" FROM orders;


-- Full Join
-- Requires union, left join, right join

SELECT customers.customerId, customers.firstName, customers.lastName, orders.orderId, orders.currency, orders.total
FROM customers
LEFT JOIN orders ON customers.customerId = orders.customerId
UNION
SELECT customers.customerId, customers.firstName, customers.lastName, orders.orderId, orders.currency, orders.total
FROM customers
RIGHT JOIN orders ON customers.customerId = orders.customerId
ORDER BY customerId;