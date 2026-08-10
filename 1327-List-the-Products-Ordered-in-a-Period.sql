# Write your MySQL query statement below
SELECT P.product_name, SUM(unit) AS unit  FROM Products P LEFT JOIN Orders O ON P.product_id = O.product_id  WHERE O.order_date >= '2020-02-01' AND O.order_date <= '2020-02-29' GROUP BY P.product_id HAVING SUM(unit) >= 100
