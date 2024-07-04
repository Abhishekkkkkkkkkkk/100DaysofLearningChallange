CREATE DATABASE Setoperation;

USE Setoperation;

CREATE TABLE Department1 (
empid int,
ename char,
erole char(255)
);

INSERT INTO Department1
VALUES
(1, 'A' ,'engineer'),
(2, 'B' ,'salesman'),
(3, 'C' ,'manager'),
(4, 'D' ,'salesman'),
(5, 'E' ,'engineer');

SELECT * FROM Department1;

CREATE TABLE Department2 (
empid int,
ename char,
erole char(255)
);

INSERT INTO Department2
VALUES
(3, 'C' ,'manager'),
(6, 'F' ,'marketing'),
(7, 'G' ,'salesman');

SELECT * FROM Department2;

-- UNION OPERATION
SELECT * FROM Department1
UNION
SELECT * FROM Department2;

-- List out all the employee in all the departments who work as a salesman
SELECT * FROM Department1 WHERE erole = 'salesman'
UNION
SELECT * FROM Department2 WHERE erole = 'salesman';

-- INTERSECT OPERATION
SELECT Department1.* FROM Department1
INNER JOIN
Department2 USING(empid);

-- MINUS OPERATION
SELECT Department1.* FROM Department1
LEFT JOIN Department2 USING(empid)
WHERE Department2.empid IS NULL;