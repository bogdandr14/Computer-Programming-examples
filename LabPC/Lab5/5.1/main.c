#include <stdio.h>
#include <stdlib.h>
int dim,i;
float produs,x[100],y[100];
int main()
{
    scanf("%d", &dim);
    if(dim<=0 || dim>100)
        printf("imposibil");
    else
    {
        for(i=0;i<dim;i++)
            scanf("%f", &x[i]); //citim elementele primului vector
        produs=0;
        for(i=0;i<dim;i++)
        {
            scanf("%f",&y[i]); //citim elementele celui de-al doilea vector
            produs=produs+x[i]*y[i]; //inmultim elementele celor 2 vectori ce se afla pe aceeasi pozitie i si apoi adunam la suma produsului scalar
        }
        printf("produsul scalar este: %.2f", produs);
    }
    return 0;
}
