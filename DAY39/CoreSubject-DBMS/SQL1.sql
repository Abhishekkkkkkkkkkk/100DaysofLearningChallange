CREATE DATABASE temp;

USE temp;

CREATE TABLE student (
id int PRIMARY KEY,
name VARCHAR(255)
);

INSERT INTO student VALUES(1, 'Abhishek');

SELECT * FROM student;

DROP DATABASE IF EXISTS temp;

DROP DATABASE IF EXISTS abhishekdb;