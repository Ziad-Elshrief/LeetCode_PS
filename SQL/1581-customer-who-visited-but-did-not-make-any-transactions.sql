-- Write your MySQL query statement below
SELECT
    customer_id,
    count(customer_id) - count(transaction_id) AS count_no_trans
FROM
    Visits
    LEFT JOIN Transactions ON Visits.visit_id = Transactions.visit_id
GROUP BY
    customer_id
HAVING
    count_no_trans > 0