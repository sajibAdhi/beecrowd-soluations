#include<stdio.h>
int main()
{
    float salary,new_salary,money_earned;
    scanf("%f",&salary);
    char p='%';

    if(salary>2000)
    {
        money_earned=salary*.04;
        new_salary=money_earned+salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: 4 %c\n",p);
    }
    else if(salary>1200)
    {
        money_earned=salary*.07;
        new_salary=money_earned+salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: 7 %c\n",p);
    }
    else if(salary>800)
    {
        money_earned=salary*.10;
        new_salary=money_earned+salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: 10 %c\n",p);
    }
    else if(salary>400)
    {
        money_earned=salary*.12;
        new_salary=money_earned+salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: 12 %c\n",p);
    }
    else
    {
        money_earned=salary*.15;
        new_salary=money_earned+salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: 15 %c\n",p);
    }

    return 0;
}
