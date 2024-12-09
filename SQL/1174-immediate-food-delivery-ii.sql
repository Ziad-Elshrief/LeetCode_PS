-- Write your MySQL query statement below
SELECT
    round(
        sum(
            CASE
                WHEN order_date = customer_pref_delivery_date
                AND order_date = first_date THEN 1
                ELSE 0
            END
        ) * 100 / count(DISTINCT D1.customer_id),
        2
    ) AS immediate_percentage
FROM
    Delivery D1
    INNER JOIN (
        SELECT
            customer_id,
            min(order_date) AS first_date
        FROM
            Delivery
        GROUP BY
            customer_id
    ) D2 ON D1.customer_id = D2.customer_id