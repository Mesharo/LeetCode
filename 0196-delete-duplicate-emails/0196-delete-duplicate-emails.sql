# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

DELETE p1 FROM
Person p1
JOIN Person p2 ON p2.email = p1.email
WHERE p1.id > p2.id