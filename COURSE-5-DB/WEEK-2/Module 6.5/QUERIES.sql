USE DUMMYDB;

SELECT DISTINCT *
FROM EMPLOYEES
ORDER BY SALARY DESC;

-- THIRD HIGHEST SALARY (WITHOUT CTE)
SELECT *
FROM EMPLOYEES
WHERE SALARY < 
	(
		SELECT MAX(SALARY)
        FROM EMPLOYEES
        WHERE SALARY < (
			
            SELECT MAX(SALARY)
            FROM EMPLOYEES
			
        )
    )
ORDER BY SALARY DESC
LIMIT 1

;


-- THIRD HIGHEST SALARY (WITH CTE)

SELECT *
FROM EMPLOYEES
WHERE SALARY < 
(
	SELECT MAX(SALARY)
    FROM EMPLOYEES
    WHERE SALARY <
    (
		SELECT MAX(SALARY)
        FROM EMPLOYEES
    )
)

ORDER BY SALARY DESC
;


WITH TABLE_1 AS
(
	SELECT MAX(SALARY) AS SAL_1
    FROM EMPLOYEES
),
	TABLE_2 AS
		(
			SELECT MAX(SALARY) AS SAL_2
            FROM EMPLOYEES 
            WHERE SALARY < (SELECT SAL_1 FROM TABLE_1)
        ),
        TABLE_3 AS 
        (
			SELECT MAX(SALARY) AS SAL_3
            FROM EMPLOYEES
            WHERE SALARY < (SELECT SAL_2 FROM TABLE_2)
        )
SELECT *
FROM EMPLOYEES
WHERE SALARY = (SELECT SAL_3 FROM TABLE_3)
;





-- THIRD LOWEST SALARY

WITH TABLE_1 AS 
(
	SELECT MIN(SALARY) AS SAL_1
    FROM EMPLOYEES
),

	TABLE_2 AS
    (
		SELECT MIN(SALARY) AS SAL_2
        FROM EMPLOYEES
        WHERE SALARY > (SELECT SAL_1 FROM TABLE_1)
    ),
		TABLE_3 AS
        (
			SELECT MIN(SALARY) AS SAL_3
            FROM EMPLOYEES
            WHERE SALARY > (SELECT SAL_2 FROM TABLE_2)
        )
SELECT *
FROM EMPLOYEES
WHERE SALARY = (SELECT SAL_3 FROM TABLE_3)
LIMIT 1

;



-- EMPLOYEE HIRED AFTER STEVEN

SELECT *
FROM EMPLOYEES
WHERE FIRST_NAME = "STEVEN"


;

SELECT *
FROM EMPLOYEES
ORDER BY HIRE_DATE ASC
;


SELECT *
FROM EMPLOYEES
WHERE HIRE_DATE > (
	SELECT HIRE_DATE AS STEVEN_KING_HIRE_DATE
	FROM EMPLOYEES
	WHERE FIRST_NAME = "STEVEN" AND LAST_NAME = "KING"
)
ORDER BY HIRE_DATE ASC
LIMIT 1
;



