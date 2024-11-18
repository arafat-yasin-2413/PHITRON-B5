-- 1

SELECT EMPLOYEES.FIRST_NAME, EMPLOYEES.JOB_ID, JOBS.JOB_TITLE
FROM EMPLOYEES ,JOBS
WHERE EMPLOYEES.JOB_ID = JOBS.JOB_ID
;


-- 2
SELECT * 
FROM EMPLOYEES
JOIN JOBS
ON EMPLOYEES.JOB_ID = JOBS.JOB_ID
;


-- 3
SELECT E.EMPLOYEE_ID,E.FIRST_NAME,J.JOB_TITLE,E.SALARY AS MAX_SAL
FROM EMPLOYEES E
JOIN JOBS J
ON E.JOB_ID = J.JOB_ID
WHERE (E.DEPARTMENT_ID,E.SALARY) IN ( 
					SELECT DEPARTMENT_ID, MAX(SALARY) AS MAX_SAL
                    FROM EMPLOYEES
                    GROUP BY DEPARTMENT_ID
                    )
                    
                    ORDER BY EMPLOYEE_ID
;


-- 4

SELECT E.EMPLOYEE_ID, E.FIRST_NAME,E.LAST_NAME,CONCAT(M.FIRST_NAME,' ',M.LAST_NAME) AS MGR_FULL_NAME
FROM EMPLOYEES E
JOIN EMPLOYEES M
ON E.MANAGER_ID = M.EMPLOYEE_ID