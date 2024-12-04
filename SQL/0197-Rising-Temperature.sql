-- Write your MySQL query statement below
SELECT
    shifted.id AS Id
FROM
    Weather original,
    Weather shifted
WHERE
    shifted.recordDate = DATE_ADD(original.recordDate, INTERVAL 1 DAY)
    AND shifted.temperature > original.temperature