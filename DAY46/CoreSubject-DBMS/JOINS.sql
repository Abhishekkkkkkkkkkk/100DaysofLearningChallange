CREATE DATABASE joinoperation;

use joinoperation;


CREATE TABLE Customers (
    Cust_ID int,
    Cust_Name varchar(255),
    Address varchar(255),
    Age int
);

insert into Customers values 
(1, 'Abhishek Kumar', 'Limbodi', 21),
(2, 'Adwitiya Moarya', 'Vijaynagar', 24),
(3, 'Anurag Kadam', 'Dewas', 23),
(4, 'Anuj Thakur', 'Indore', 22);

select * from Customers;


CREATE TABLE Orders (
    Order_ID int,
    Cust_ID int,
    Order_Date date
);

insert into Orders values 
(11, 1, '2024-06-10'),
(22, 2, '2024-06-20'),
(33, 3, '2024-06-30'),
(44, 4, '2024-07-07');


select * from Orders;

-- Inner Join
SELECT Orders.Order_ID, Customers.Cust_Name, Orders.Order_Date
FROM Orders
INNER JOIN Customers ON Orders.Cust_ID=Customers.Cust_ID;

