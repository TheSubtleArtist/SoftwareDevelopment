SELECT firstName, lastName
FROM customers
WHERE customerId IN
    (SELECT customerId
    FROM orders
    WHERE total > 300);