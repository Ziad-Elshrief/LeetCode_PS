-- Write your MySQL query statement below
SELECT
    name AS results
FROM
    (
        SELECT
            name,
            count(name) AS ratings
        FROM
            MovieRating
            INNER JOIN Users ON MovieRating.user_id = Users.user_id
        GROUP BY
            MovieRating.user_id
        ORDER BY
            ratings DESC,
            name
        LIMIT
            1
    ) top_user
UNION
ALL
SELECT
    title
FROM
    (
        SELECT
            title,
            avg(rating) AS avg_rating
        FROM
            MovieRating
            INNER JOIN Movies ON MovieRating.movie_id = Movies.movie_id
        WHERE
            created_at <= '2020-2-29'
            AND created_at >= '2020-2-1'
        GROUP BY
            MovieRating.movie_id
        ORDER BY
            avg_rating DESC,
            title
        LIMIT
            1
    ) top_movie