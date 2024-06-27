USE ORG;

SELECT * FROM Worker;

-- Wildcard Charaters in SQL
SELECT * FROM Worker WHERE FIRST_NAME LIKE '%n%';
SELECT * FROM Worker WHERE FIRST_NAME LIKE '_n%';

-- Sorting in SQL using ORDER BY 
SELECT * FROM Worker ORDER BY SALARY;
SELECT * FROM Worker ORDER BY SALARY ASC;
SELECT * FROM Worker ORDER BY SALARY DESC;

-- DISTINCT Keyword
SELECT DEPARTMENT FROM Worker;
SELECT DISTINCT DEPARTMENT FROM Worker;

-- Grouping the Data using GROUP BY
select department from worker group by department;
select department, count(department) from worker group by department;

-- Average Salary Per Department 
select department, avg(salary) from worker group by department;

-- Minimum Salary Per Department 
select department, min(salary) from worker group by department;

-- Maximum Salary Per Department 
select department, max(salary) from worker group by department;

-- Total Salary Sum Per Department 
select department, SUM(salary) from worker group by department;

-- GROUP BY HAVING keyword
select department, count(department) from worker group by department having count(department) > 1;

