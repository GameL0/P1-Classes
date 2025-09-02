#include <stdio.h>

int main()
{
    double salary, new_salary, aumento, percent;
    scanf("%lf", &salary);

    if (salary <= 280)
    {
        percent = 20;
        new_salary = salary * 1.2;
        aumento = new_salary - salary;
    }
    else if (salary > 280 && salary < 700)
    {
        percent = 15;
        new_salary = salary * 1.15;
        aumento = new_salary - salary;
    }
    else if (salary >= 700 && salary < 1500)
    {
        percent = 10;
        new_salary = salary * 1.1;
        aumento = new_salary - salary;
    }
    else
    {
        percent = 5;
        new_salary = salary * 1.05;
        aumento = new_salary - salary;
    }

    printf("%.2f\n", salary);
    printf("%.f\n", percent);
    printf("%.2f\n", aumento);
    printf("%.2f\n", new_salary);


    return 0;
}