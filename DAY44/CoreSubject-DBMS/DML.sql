use temp1;

CREATE TABLE Customer (
    id integer primary key,
    cname varchar(255),
    Address varchar(255),
    Gender char(6),
    City varchar(255),
    PinCode integer
);

-- Insert Methods 
insert into Customer
values
(1250, 'Abhishek Kumar', 'Vijay Nagar', 'M', 'Indore', 452011),
(1300, 'Adwitiya Morya', 'Limbodi', 'M', 'Bhopal', 452000),
(1350, 'Payal', 'Pune', 'F', 'Mumbai', 442233),
(1400, 'Pratiksha', 'Patna', 'F', 'Bihar', 848209),
(1251, 'Anurag Kadam', 'Dewaas', 'M', 'Bhopal', 414243);

Insert into Customer values
(1210, 'Aman Bhai', 'Samastipur', 'M', 'Bihar', 848201);

Insert into Customer(id, cname) values
(1410, 'Shrinath');

-- Update Method
UPDATE Customer set Address = 'Mumbai', Gender = 'M' where id = 1410;

-- SET SQL_SAFE_UPDATES = 0; 
-- SET SQL_SAFE_UPDATES = 1;

-- Update Multiple Rows
update Customer set Pincode = 452010;

update Customer set Pincode = Pincode + 1;

-- Delete Method

delete from Customer where id = '1410';
SET SQL_SAFE_UPDATES = 0; 
SET SQL_SAFE_UPDATES = 1;
-- Sab Kuch Delete karna ek saath
delete from Customer; 

-- Replace Method
REPLACE INTO Customer (id, city)
VALUES (1210, 'Colony');

REPLACE INTO Customer (id, cname, city) VALUES (1100, 'Hardik Pandiya', 'Colony');

REPLACE INTO Customer SET id = 1300, cname = 'Ramsesh', City = 'Bhuj';

REPLACE INTO Customer (id, cname, City)
  select id, cname, City
from Customer where id = 1251;



SELECT * from Customer;




