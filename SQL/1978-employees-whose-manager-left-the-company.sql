-- Write your MySQL query statement below
SELECT
    employee_id
FROM
    Employees E1
WHERE
    salary < 30000
    AND manager_id IS NOT NULL
    AND NOT EXISTS (
        SELECT
            employee_id
        FROM
            Employees E2
        WHERE
            E2.employee_id = E1.manager_id
    )
ORDER BY
    employee_id