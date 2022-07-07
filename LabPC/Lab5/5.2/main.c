#include <stdio.h>
#include <stdlib.h>
int dim,i,j,c;
float x[100][100];
int main()
{
    scanf("%d", &dim);
    if(dim<=0 || dim>100)
        printf("imposibil");
    else
    {
        for(i=0;i<dim;i++)
            for(j=0;j<dim;j++)
            {
                scanf("%f", &x[i][j]); //citim elementele matricii de la 0 la n-1 de linie i si coloana j
                if(i!=j && x[i][j]!=0) // daca gasim un element nenul care nu se afla pe diagonala, memoram intr-un contor
                    c=1;
            }
        if(c==1)
            printf("matricea nu este diagonala");
        else
            printf("matricea este diagonala");
    }
    return 0;
}
