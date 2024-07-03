CREATE DATABASE joins;

USE joins;

CREATE TABLE Project (
id int,
empID int,
PName varchar(255),
startDate date,
clientID int
);

INSERT INTO Project 
VALUES
(1, 1, 'A', '2021-04-21', 3),
(2, 2, 'B', '2021-03-12', 1),
(3, 3, 'C', '2021-01-16', 5),
(4, 4, 'D', '2021-04-27', 2),
(5, 5, 'E', '2021-05-01', 4);

SELECT * FROM Project;

CREATE TABLE Employee (
id int,
fName varchar(255),
lName varchar(255),
Age int,
emailID varchar(255),
phoneNo int(10),
city char(255)
);

INSERT INTO Employee 
VALUES
(1, 'Abhishek', 'Kumar', 21, 'abhi@gmail.com', 9508, 'Indore'),
(2, 'Aman', 'Paradkar', 22, 'aman@gmail.com', 72324, 'Bhopal'),
(3, 'Anurag', 'Kadam', 23, 'anurag@gmail.com', 92234, 'Dewas'),
(4, 'Anuj', 'Thakur', 24, 'anuj@gmail.com', 9876, 'Vijaynagar'),
(5, 'Adwitiya', 'Moarya', 25, 'adwitiya@gmail.com', 5434, 'Limbodi');

SELECT * FROM Employee;
 
CREATE TABLE Clients (
id int,
first_Name varchar(255),
last_Name varchar(255),
age int,
emailID varchar(255),
phoneNo int(10),
city char(255),
empID int
);

INSERT INTO Clients 
VALUES
(1, 'Mohit', 'Kumar', 12, 'mohit@gmail.com', 3211, 'Bihar', 3),
(2, 'Kadir', 'Khan', 32, 'kadir@gmail.com', 72344, 'Singhiya', 3),
(3, 'Deep', 'Raj', 28, 'deep@gmail.com', 97054, 'Mungair', 1),
(4, 'Ashish', 'Pandey', 53, 'ashish@gmail.com', 912346, 'Jharkhand', 5),
(5, 'Aditya', 'Verma', 29, 'aditya@gmail.com', 897346, 'Patna', 2);

SELECT * FROM Clients;