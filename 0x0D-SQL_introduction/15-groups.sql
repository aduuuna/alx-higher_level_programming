-- List the number of records with the same scores in the table
SELECT score, COUNT(1) AS number FROM second_table GROUP BY score ORDER BY number DESC;

