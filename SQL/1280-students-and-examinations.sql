-- Write your MySQL query statement below
SELECT
    Students.student_id,
    Students.student_name,
    Subjects.subject_name,
    count(Examinations.subject_name) AS attended_exams
FROM
    Students
    LEFT JOIN Subjects ON Student_id
    LEFT JOIN Examinations ON Subjects.subject_name = Examinations.subject_name
    AND Examinations.student_id = Students.student_id
WHERE
    length(Subjects.subject_name) > 0
GROUP BY
    student_id,
    subject_name
ORDER BY
    student_id,
    subject_name