-- Write your MySQL query statement below
DELETE p
FROM
    Person p,
    Person q
WHERE
    p.Id > q.Id
    AND q.Email = p.Email