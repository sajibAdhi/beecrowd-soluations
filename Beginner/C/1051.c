#include<stdio.h>
#define p printf
int main()
{
    float salary,tax=0,totalTax=0;
    scanf("%f",&salary);
    int money[3]={4500,3000,2000};
    int amountTax[3]={28,18,8};

    int i;
    for(i=0;i<3;i++){
        if(salary>money[i]){
            salary = salary-money[i];
            tax=(salary*amountTax[i])/100;
            salary=money[i];
            totalTax=totalTax+tax;
        }
    }
    if(totalTax==0){
        p("Isento\n");
    } else {
        p("R$ %.2f\n",totalTax);
    }

    return 0;
}
