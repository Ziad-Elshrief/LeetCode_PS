-- Write your MySQL query statement below
SELECT
    A1.machine_id,
    round(avg(A2.timestamp - A1.timeStamp), 3) AS processing_time
FROM
    Activity A1,
    Activity A2
WHERE
    A1.activity_type = 'start'
    AND A2.activity_type = 'end'
    AND A1.process_id = A2.process_id
    AND A1.machine_id = A2.machine_id
GROUP BY
    machine_id