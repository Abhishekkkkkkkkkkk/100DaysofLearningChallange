use joins;

-- WHERE clause same table
-- employee with age > 30
select * from employee where Age in (select Age from employee where Age > 23);


-- WHERE clause different table
-- employee details working in more than one project
select * from employee where id in (
select empID from project group by empID having count(empID) > 1);


-- single value sub query
-- employee details having age > average age
select * from employee where Age > (select avg(Age) from employee);


-- FROM Clause - derived table
-- Select max age person whose forst name is 'a'
select max(Age) from (select * from employee where fName like '%a%') as temp;
select * from employee where fName like '%a%';


-- Co Related Sub Queries
-- Find 3rd oldest employee
select * from employee e1
where 3 = (
select count(e2.Age)
from employee e2
where e2.Age >= e1.Age
);