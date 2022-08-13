# Write your MySQL query statement below

select customer_id, count(*) count_no_trans 
from(SELECT customer_id, transaction_id  
		FROM Visits v 
			LEFT JOIN 
		Transactions t 
		on v.visit_id=t.visit_id ) p 
where transaction_id is null 
group by customer_id 
order by count_no_trans desc