#include <stdio.h>
#include <stdlib.h>
int dim,i,desc,cresc;
float x[100];
int main()
{
    scanf("%d", &dim);
    if(dim<=0 || dim>100)
        printf("imposibil");
    else
    {
        scanf("%f", &x[0]);//citim primul termen separat pentru a avea cu cine compara pe urmatorul imediat dupa citire
        for(i=1;i<dim;i++)
        {
            scanf("%f", &x[i]);
            if(x[i]>x[i-1])//daca termenul curent e mai mare decat cel anterior, ii dam subsirului caracter crescator
                cresc=1;
            if(x[i]<x[i-1])//daca termenul curent e mai mic decat cel anterior, ii dam subsirului caracter descrescator
                desc=1;
        }
        if((cresc==1 && desc==1)|| (cresc==0 && desc==0))
            printf("neordonat");//sirul e neordonat daca are caracter si4 crescator si descrescator sau daca toate numerele sunt egale
        else
        {
            if(cresc==1)
                printf("crescator");
            if(desc==1)
                printf("descrescator");
        }
    }
    return 0;
}
