#include<stdio.h>
int main()
{
    char a[20],b[20],c[20];
    gets(a); gets(b); gets(c);
    char a1[20]="vertebrado";
    char b1[20]="ave";
    char b2[20]="inseto";
    char c1[20]="carnivoro";
    char c2[20]="onivoro";
    char c3[20]="hematofago";

    if(strcmp(a,a1)==0)
    {
        if(strcmp(b,b1)==0)
        {
            if(strcmp(c,c1)==0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else
        {
            if(strcmp(c,c2)==0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else
    {
        if(strcmp(b,b2)==0)
        {
            if(strcmp(c,c3)==0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else
        {
            if(strcmp(c,c3)==0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }


    return 0;
}
