/* Enter basic salary of an employee and calculate Gross salary according to given
conditions:
- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic*/
#include<stdio.h>
int main()
{
    float salary;
    printf("enter the basic salary of the employee\n");
    scanf("%f",&salary);
    if(salary >=10000 && salary<20000)
        salary = (salary*20)/100 +(salary*80)/100 + salary;
    
    else if(salary >= 20000 && salary<30000 )
    {
        salary = salary + (salary * 0.25) + (salary * 0.90);
    }
    else if(salary >= 30000)
    {
        salary = salary + (salary * 0.30) + (salary * 0.95);
    }
    printf("%.2f",salary);
   return 0;
} 
