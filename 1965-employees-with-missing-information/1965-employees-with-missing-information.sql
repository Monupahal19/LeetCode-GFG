# Write your MySQL query statement below

-- SELECT *
-- FROM
-- (SELECT a.employee_id AS "employee_id"
-- FROM Employees a
-- LEFT JOIN Salaries b
-- ON a.employee_id = b.employee_id
-- WHERE b.employee_id IS NULL 
-- UNION
-- SELECT b.employee_id AS "employee_id"
-- FROM Employees a
-- RIGHT JOIN Salaries b
-- ON a.employee_id = b.employee_id
-- WHERE a.employee_id IS NULL ) aa
-- ORDER BY employee_id

select employee_id from Employees where employee_id not in (select employee_id from Salaries)
union
select employee_id from Salaries where employee_id not in (select employee_id from Employees)
order by employee_id;