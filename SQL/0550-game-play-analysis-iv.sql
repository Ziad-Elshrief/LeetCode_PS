-- Write your MySQL query statement below
SELECT
    round(
        sum(datediff(A1.event_date, first_date) = 1) / count(DISTINCT A1.player_id),
        2
    ) AS fraction
FROM
    Activity A1
    INNER JOIN (
        SELECT
            player_id,
            min(event_date) AS first_date
        FROM
            activity
        GROUP BY
            player_id
    ) A2 ON A1.player_id = A2.player_id