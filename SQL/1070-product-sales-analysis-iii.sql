-- Write your MySQL query statement below
SELECT
    Sales.product_id,
    Sales.year AS first_year,
    Sales.quantity,
    Sales.price
FROM
    Sales
    INNER JOIN (
        SELECT
            product_id,
            min(year) AS min_year
        FROM
            Sales
        GROUP BY
            product_id
    ) S ON Sales.product_id = S.product_id
    AND Sales.year = S.min_year