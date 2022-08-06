# Write your MySQL query statement below

-- select name as customers from Customers where id not in (select customerId from Orders);

select c.name as Customers 
from Customers as c
LEFT JOIN Orders as o 
ON c.id=o.customerId 
where o.customerId is null;