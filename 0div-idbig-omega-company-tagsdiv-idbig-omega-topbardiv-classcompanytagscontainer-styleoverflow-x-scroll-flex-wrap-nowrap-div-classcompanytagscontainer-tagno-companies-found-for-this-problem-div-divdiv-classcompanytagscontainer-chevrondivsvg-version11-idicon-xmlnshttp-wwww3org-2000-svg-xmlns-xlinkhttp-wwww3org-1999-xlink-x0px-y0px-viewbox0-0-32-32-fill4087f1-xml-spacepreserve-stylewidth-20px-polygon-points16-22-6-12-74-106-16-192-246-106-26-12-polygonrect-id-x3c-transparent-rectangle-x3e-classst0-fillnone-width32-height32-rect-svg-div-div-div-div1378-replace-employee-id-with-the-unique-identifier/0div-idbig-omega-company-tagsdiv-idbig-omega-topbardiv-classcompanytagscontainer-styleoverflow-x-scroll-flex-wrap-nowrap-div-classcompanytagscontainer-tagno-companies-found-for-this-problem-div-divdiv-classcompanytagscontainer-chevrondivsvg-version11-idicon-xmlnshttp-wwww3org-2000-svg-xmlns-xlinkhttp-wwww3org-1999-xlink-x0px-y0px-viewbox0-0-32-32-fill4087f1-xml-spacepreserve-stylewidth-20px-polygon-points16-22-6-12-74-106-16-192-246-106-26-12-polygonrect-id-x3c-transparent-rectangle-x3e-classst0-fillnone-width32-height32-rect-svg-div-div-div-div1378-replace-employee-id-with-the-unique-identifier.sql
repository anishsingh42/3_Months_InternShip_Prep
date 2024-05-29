# Write your MySQL query statement below
select empUni.unique_id, emp.name
from Employees as emp  left join EmployeeUNI as empuni
on emp.id = empuni.id;