-- INNER JOIN EXAMPLE

-- Enlist all the Employees ID's, name along with the project allocated to them

use joins;

SELECT * FROM Employee;

SELECT e.id, e.fName, e.lName, p.id AS projectID, p.PName 
FROM Employee AS e
INNER JOIN Project AS p ON e.id = p.empID;

-- Join Everything form the both table project and employee
SELECT *, p.id AS projectID, p.PName 
FROM Employee AS e
INNER JOIN Project AS p ON e.id = p.empID;
