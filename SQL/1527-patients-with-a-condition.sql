-- Write your MySQL query statement below
SELECT
    *
FROM
    Patients
WHERE
    instr(
        LPAD(conditions, length(conditions) + 1, ' '),
        ' DIAB1'
    ) > 0