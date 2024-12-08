-- Write your MySQL query statement below
SELECT
    substring(trans_date, 1, 7) AS MONTH,
    country,
    count(state) AS trans_count,
    sum(state = 'approved') AS approved_count,
    sum(amount) AS trans_total_amount,
    sum(
        CASE
            WHEN state = 'approved' THEN amount
            ELSE 0
        END
    ) AS approved_total_amount
FROM
    Transactions
GROUP BY
    substring(trans_date, 1, 7),
    country