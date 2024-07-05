use joins;

-- VIEWS in MY SQL
select * from employee;

-- Creating a view
CREATE VIEW Custom_View as SELECT fName, Age FROM employee;

-- Viewing from View
SELECT * FROM Custom_View;

-- Altering the View
ALTER VIEW Custom_View AS SELECT fName, lName, age FROM employee; 

-- Dropping the View
DROP VIEW IF EXISTS  Custom_View;