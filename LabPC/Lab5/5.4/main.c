#include <stdio.h>
#include <stdlib.h>
int dim,i;
float x[100],y[100],aria;
int main()
{
    scanf("%d", &dim);
    if(dim<=1 || dim>100)
        printf("imposibil");
    else
    {
        scanf("%f%f", &x[0], &y[0]);//citim primul termen separat pentru a putea face aria partiala imediat dupa citire
        for(i=1;i<dim;i++)
        {
            scanf("%f%f", &x[i], &y[i]);
            aria=aria+(y[i-1]+y[i])/2*(x[i]-x[i-1]);//calculam aria trapezului de inaltime x[i]-x[i-1] si cu bazele y[i] si y[i-1], apoi o adaugam ariei graficului
        }
        printf("aria este: %.2f", aria);
    }
    return 0;
}
