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
(1, 'Abhishek Kumar', 'Vijay Nagar', 'M', 'Indore', NULL);

-- CREATE TABLE Order_Details (
-- order_id integer primary key,
-- delivery_date date,
-- cust_id int,
-- foreign key (cust_id) references Customer(id) on delete cascade
-- );

CREATE TABLE Order_Details (
order_id integer primary key,
delivery_date date,
cust_id int,
foreign key (cust_id) references Customer(id) on delete set null
);

insert into Order_Details
values (3, '2019-03-11', 1);
insert into Order_Details
values (2, '2019-03-12', 1);

delete from Customer where id = 1;

select * from Customer;
select * from Order_Details;