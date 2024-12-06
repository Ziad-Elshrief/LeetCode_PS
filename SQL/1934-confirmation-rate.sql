-- Write your MySQL query statement below
SELECT
    Signups.user_id,
    coalesce(round(sum(ACTION = 'confirmed') / count(*), 2), 0) AS confirmation_rate
FROM
    Signups
    LEFT JOIN Confirmations ON Confirmations.user_id = Signups.user_id
GROUP BY
    Signups.user_id