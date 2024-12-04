-- Write your MySQL query statement below
SELECT
    user_id,
    concat(
        substr(upper(name), 1, 1),
        substr(lower(name), 2, length(name))
    ) AS name
FROM
    Users
ORDER BY
    user_id