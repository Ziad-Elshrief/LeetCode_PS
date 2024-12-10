-- Write your MySQL query statement below
SELECT
    round(sum(tiv_2016), 2) AS tiv_2016
FROM
    Insurance I1
    INNER JOIN (
        SELECT
            lat,
            lon,
            count(*) lat_lon
        FROM
            Insurance
        GROUP BY
            lat,
            lon
    ) I_lon_lot ON I1.lat = I_lon_lot.lat
    AND I1.lon = I_lon_lot.lon
    AND lat_lon = 1
    INNER JOIN (
        SELECT
            tiv_2015,
            count(*) AS tiv_count
        FROM
            Insurance
        GROUP BY
            tiv_2015
    ) I_tiv ON I1.tiv_2015 = I_tiv.tiv_2015
    AND tiv_count > 1