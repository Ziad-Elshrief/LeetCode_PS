-- Write your MySQL query statement below
SELECT
    id,
    count(id) AS num
FROM
    (
        SELECT
            requester_id AS id
        FROM
            RequestAccepted
        UNION
        ALL
        SELECT
            accepter_id
        FROM
            RequestAccepted
    ) People
GROUP BY
    id
ORDER BY
    num DESC
LIMIT
    1