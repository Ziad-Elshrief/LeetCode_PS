-- Write your MySQL query statement below
SELECT
    *
FROM
    Users
WHERE
    mail REGEXP '^[:alpha:]+[._-]*[A-Za-z0-9]*@leetcode[.]com$'