SELECT sno, cno, score
FROM sc s1
WHERE score > (
    SELECT AVG(score)
    FROM sc s2
    WHERE s2.cno = s1.cno
);
-- 查每门课中，高于该课程平均成绩的学生