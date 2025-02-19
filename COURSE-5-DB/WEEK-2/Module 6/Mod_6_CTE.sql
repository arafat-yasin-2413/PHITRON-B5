WITH TEMP AS
(
SELECT * 
FROM EMPLOYEES
LIMIT 5
)
SELECT *
FROM TEMP;



-- 

WITH AVGIT AS
(	
	SELECT AVG(SALARY) AS SAL1
    FROM EMPLOYEES
    WHERE DEPARTMENT_ID = 60 -- IT
),
MAXMKT AS 
(	
	SELECT MAX(SALARY) AS SAL2
    FROM EMPLOYEES
    WHERE DEPARTMENT_ID = 20 -- MARKETING
)

SELECT *
FROM EMPLOYEES 
WHERE SALARY > (SELECT SAL1 FROM AVGIT) AND SALARY < (SELECT SAL2 FROM MAXMKT);
