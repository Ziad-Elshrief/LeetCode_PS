-- Write your MySQL query statement below
SELECT
    CASE
        WHEN count(E1.id) >= 5 THEN E2.name
        ELSE 'none'
    END AS name
FROM
    Employee E1,
    Employee E2
WHERE
    E1.managerId IS NOT NULL
    AND E1.managerId = E2.id
GROUP BY
    E1.managerId
HAVING
    name IS NULL
    OR name != 'none'