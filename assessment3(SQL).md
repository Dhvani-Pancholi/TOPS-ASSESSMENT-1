##### Create customer and salesman table and write a SQL query to find the salesperson(s) and the customer(s) represented here. Return the customer Name, City, salesman,commission.(Using Joins)


###### customer table created
```sql
CREATE TABLE Customer(
    customer_id int PRIMARY KEY,
    customer_name varchar(50),
    city varchar(30),
    grade int,
    salesman_id int
);
```

###### salesman table created
```sql
CREATE TABLE Salesman (
    salesman_id int PRIMARY KEY,
    name varchar(50),
    city varchar(30),
    commission decimal(10, 2)
);
```

###### insert data into customer
```sql
insert into Customer VALUES
(1,"jethalal","surat",100,101),
(2,"daya","ahem",200,102),
(3,"tapu","Bombay",300,103),
(4,"anjali","pune",200,104),
(5,"tarak","Bombay",100,105)
```

###### insert data into salesman
```sql
insert into Salesman VALUES
(101,"bheem","Bombay",0.11),
(102,"raju","surat",0.12),
(104,"chutki","dholakpur",0.10),
(103,"kalia","pune",0.13);
```

###### Inner join
```sql
SELECT 
    Customer.customer_name AS Customer_Name,
    Customer.city AS Customer_City,
    Salesman.name AS Salesman_Name,
    Salesman.commission AS Salesman_Commission
FROM 
    Customer
INNER JOIN Salesman ON Customer.salesman_id = Salesman.salesman_id;
```