/*
Amber's conglomerate corporation just acquired some new companies. 
Each of the companies follows this hierarchy: 

Founder>>Lead Manager >> Senior Manager >> Manager >> EMployee

Given the table schemas below, write a query to print the company_code, founder name, total number of lead managers, total number of senior managers, 
total number of managers, and total number of employees. Order your output by ascending company_code.
*/


-- works
-- note: this will not work without having both the company_code and the founder in the group by statement
select 
    company.company_code, 
    company.founder, 
    count(distinct lead_manager.lead_manager_code), 
    count(distinct senior_manager.senior_manager_code), 
    count(distinct manager.manager_code), 
    count(distinct employee.employee_code) 
from company, lead_manager, senior_manager, manager, employee 
where company.company_code = lead_manager.company_code
    and lead_manager.lead_manager_code = senior_manager.lead_manager_code
    and senior_manager.senior_manager_code = manager.senior_manager_code
    and manager.manager_code = employee.manager_code
group by company.company_code, company.founder order by company.company_code asc;



-- works
select company_code, founder,
(select count(distinct lead_manager_code) from Lead_Manager where company_code=c.company_code),
(select count(distinct senior_manager_code) from Senior_Manager where company_code=c.company_code),
(select count(distinct manager_code) from Manager where company_code=c.company_code),
(select count(distinct employee_code) from Employee where company_code=c.company_code)
from Company c
order by company_code;