-- Write your MySQL query statement below
SELECT
    E1.employee_id,
    department_id
FROM
    Employee E1
    INNER JOIN (
        SELECT
            employee_id,
            count(*) AS count_dep
        FROM
            Employee
        GROUP BY
            employee_id
    ) E2 ON E1.employee_id = E2.employee_id
WHERE
    primary_flag = 'Y'
    OR count_dep = 1