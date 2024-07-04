SELECT * FROM Worker;
SELECT FIRST_NAME FROM Worker;
SELECT 44 + 11;
SELECT now();
SELECT lcase('ABHISHEK');
SELECT ucase('abhishek');
SELECT * FROM Worker WHERE SALARY > 40000;
SELECT * FROM Worker WHERE DEPARTMENT = 'SDE';
SELECT * FROM Worker WHERE SALARY BETWEEN 40000 AND 50000;

SELECT * FROM Worker WHERE DEPARTMENT = 'SDE' OR DEPARTMENT = 'Admin';
SELECT * FROM Worker WHERE DEPARTMENT IN ('SDE', 'Admin');
SELECT * FROM Worker WHERE DEPARTMENT NOT IN ('SDE', 'Admin');

SELECT * FROM Worker WHERE SALARY is NULL;