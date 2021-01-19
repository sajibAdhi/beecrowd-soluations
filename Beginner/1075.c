#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);

    for(i=1;i<10000;i++){
        if(i%13==2)
            printf("%d\n",i);
    }
    return 0;
}
