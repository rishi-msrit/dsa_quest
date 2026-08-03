# Write your MySQL query statement below
SELECT Employee.name, Bonus.bonus FROM EMPLOYEE LEFT JOIN BONUS 
ON Employee.empId = Bonus.empID WHERE Bonus.bonus < 1000 OR bonus IS NULL