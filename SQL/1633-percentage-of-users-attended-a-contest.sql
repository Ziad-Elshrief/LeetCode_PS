-- Write your MySQL query statement below
SELECT
    contest_id,
    round(
        count(Register.contest_id) * 100 /(
            SELECT
                count(*)
            FROM
                Users
        ),
        2
    ) AS percentage
FROM
    Register
GROUP BY
    contest_id
ORDER BY
    percentage DESC,
    contest_id