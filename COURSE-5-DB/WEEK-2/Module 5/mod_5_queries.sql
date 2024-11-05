SELECT 
FIRST_NAME,SALARY, 
SALARY+ CASE WHEN DEPARTMENT_ID = 100 THEN 10000 ELSE 0 END AS UPDATED_SALARY,
DEPARTMENT_ID
FROM EMPLOYEES;



SELECT *
FROM EMPLOYEES
WHERE 
SALARY> (

	SELECT SALARY
    FROM
	EMPLOYEES 
	WHERE FIRST_NAME = "BRUCE"

)
;


SELECT DISTINCT JOB_ID
FROM EMPLOYEES;




SELECT * 
FROM EMPLOYEES 
ORDER BY SALARY ASC
LIMIT 4 OFFSET 5;


SELECT * 
FROM EMPLOYEES 
ORDER BY EMPLOYEE_ID ASC
LIMIT 5 OFFSET 3;



SELECT *
FROM EMPLOYEES 
ORDER BY EMPLOYEE_ID ASC
LIMIT 4,5;




SELECT *
FROM EMPLOYEES
WHERE LAST_NAME LIKE "GREEN%";


SELECT *
FROM EMPLOYEES
WHERE LAST_NAME LIKE "%EE%";








