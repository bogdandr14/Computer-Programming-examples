#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    double *v;
    scanf("%d",&n);
    if(n<=0)
        printf("imposibil");
    else
    {
        v=(double*)(malloc(n*sizeof(double)));//aloca n spatii de memorie de dimensiunea double
        for(i=0;i<n;i++)
        {
            scanf("%lf",&v[i]);
            if(v[i]==0)//imediat cum citim un numar nul il stergem
            {
                i--;//decrementam pe i pentru ca la pasul urmator sa recitim pe aceeasi pozitie
                n--;//decrementam n-ul pentru ca am sters o valoare din vector si pentru a evita citirea pana cand sunt n valori nenule
            }
        }
        for(i=0;i<n;i++)
            printf("%lf\n",v[i]);
    }
    free(v);
    return 0;
}
