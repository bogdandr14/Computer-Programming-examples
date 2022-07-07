#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *maxim,*s,i,n;
    scanf("%d", &n);
    if(n<=0 || n>100)
        printf("imposibil");
    else
    {
        s=(int*)(malloc(n*sizeof(int)));//ii alocam lui s n spatii de memorie de lungime int si de tip int
        for(i=0;i<n;i++)
        {
            scanf("%d", &s[i]);
            if(i==0)
                maxim=s;//initializam valoarea maxima cu primul numar citit
            if(*maxim<*(s+i))// comparam valorile de la pozitia s[i] si de la valoarea pointerului maxim
                maxim=s+i;  //maxim ia valoarea adresei de memorie a lui s+i
        }
        printf("Max este: %d", *maxim);//afisam valoarea de la adresa la care pointeaza maxim
        free(s);//eliberam spatiul alocat cu malloc
    }

    return 0;
}
