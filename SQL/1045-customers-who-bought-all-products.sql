-- Write your MySQL query statement below
SELECT
    customer_id
FROM
    Product
    LEFT JOIN Customer ON Customer.product_key = Product.product_key
GROUP BY
    customer_id
HAVING
    (
        SELECT
            count(product_key)
        FROM
            Product
    ) = count(DISTINCT Customer.product_key)
ORDER BY
    customer_id