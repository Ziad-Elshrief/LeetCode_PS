-- Write your MySQL query statement below
SELECT
    CASE
        WHEN count(*) > 1 THEN min(salary)
        ELSE NULL
    END AS SecondHighestSalary
FROM
    (
        SELECT
            salary
        FROM
            Employee
        GROUP BY
            salary
        ORDER BY
            salary DESC
        LIMIT
            2
    ) Salaries