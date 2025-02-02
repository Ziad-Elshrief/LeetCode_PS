-- Write your MySQL query statement below
SELECT
    project_id,
    round(avg(experience_years), 2) AS average_years
FROM
    Project
    INNER JOIN Employee ON Employee.employee_id = Project.employee_id
GROUP BY
    project_id