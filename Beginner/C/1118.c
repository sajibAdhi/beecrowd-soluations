#include<stdio.h>

float inputValidation(float input);
float avg(float inp1, float inp2);

/**
* Main Function
*/
void main()
{
    int numOfValidInput = 0;
    float input;
    float inp1;
    float inp2;

    while(numOfValidInput != 2)
    {
        scanf("%f",&input);

        if(input <0 || input > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            numOfValidInput++;
            if(numOfValidInput == 1)
            {
                inp1 = input;
                //printf("input1 = %f\n", inp1);
            }
            else if(numOfValidInput == 2)
            {
                inp2 = input;
                //printf("input2 = %f\n", inp2);
            }
        }
    }

    printf("media = %.2f \n", (inp1+inp2)/2);

    int x = 0;
    while(x != 2)
    {
        scanf("%d", &x);
        printf("novo calculo (1-sim 2-nao)\n");
    }
}
