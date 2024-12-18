-- Write your MySQL query statement below
SELECT
    product_name,
    sum(unit) AS unit
FROM
    Orders
    INNER JOIN Products ON Products.product_id = Orders.product_id
WHERE
    order_date BETWEEN '2020-02-01'
    AND '2020-02-29'
GROUP BY
    Orders.product_id
HAVING
    unit >= 100