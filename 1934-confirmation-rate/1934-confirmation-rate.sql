# Write your MySQL query statement below
SELECT s.user_id, IFNULL(ROUND((SELECT COUNT(*) FROM Confirmations c WHERE c.user_id=s.user_id AND c.action = 'confirmed')/(SELECT COUNT(*) FROM Confirmations c WHERE c.user_id=s.user_id),2),0) AS confirmation_rate
FROM Signups s