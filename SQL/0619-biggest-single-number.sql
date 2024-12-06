-- Write your MySQL query statement below
SELECT
    num
FROM
    MyNumbers
GROUP BY
    num
HAVING
    count(num) = 1
UNION
SELECT
    NULL
ORDER BY
    num DESC
LIMIT
    1