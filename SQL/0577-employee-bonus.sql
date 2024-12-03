-- Write your MySQL query statement below
SELECT
    name,
    bonus
FROM
    Employee
    LEFT JOIN Bonus ON Employee.empId = Bonus.empId
WHERE
    coalesce(bonus, 0) < 1000