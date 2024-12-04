-- Write your MySQL query statement below
SELECT
    E1.reports_to AS employee_id,
    E2.name AS name,
    count(E1.name) AS reports_count,
    round(avg(E1.age)) AS average_age
FROM
    Employees E1,
    Employees E2
WHERE
    E1.reports_to = E2.employee_id
GROUP BY
    E1.reports_to
HAVING
    name IS NOT NULL
ORDER BY
    E1.reports_to