-- Write your MySQL query statement below
SELECT
    Prices.product_id,
    coalesce(round(sum(units * price) / sum(units), 2), 0) AS average_price
FROM
    Prices
    LEFT JOIN UnitsSold ON Prices.product_id = UnitsSold.product_id
    AND purchase_date BETWEEN start_date
    AND end_date
GROUP BY
    product_id