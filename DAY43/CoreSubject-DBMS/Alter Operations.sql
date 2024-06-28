use org;

create table account(
id int primary key,
name varchar(255) UNIQUE,
balance INT NOT NULL DEFAULT 0
);

-- Add New Column
ALTER TABLE account ADD intrest FLOAT NOT NULL DEFAULT 0; 

-- MODIFY 
ALTER TABLE account MODIFY intrest DOUBLE NOT NULL DEFAULT 0; 

select * from account; 

DESC account;

-- CHANGE COLUMN  Rename column name
ALTER TABLE account CHANGE COLUMN intrest email varchar(255);

-- DROP COLUMN  Drop a column completely
ALTER TABLE account DROP COLUMN email;

-- RENAME  Rename table name itself
ALTER TABLE account RENAME TO customerAccount;

DESC customerAccount;
