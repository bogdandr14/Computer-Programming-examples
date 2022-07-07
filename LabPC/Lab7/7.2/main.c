#include <stdio.h>
#include <stdlib.h>
void fact(long long *result,int n)
{
    int i;
    *result=1;//initializam factorialul cu 0!
    for(i=2;i<=n;i++)
        *result=(*result)*i;
}
int main()
{
    int n;
    long long f;//30! are 32 de cifre si nu intra in dimensiunea int-ului
    scanf("%d", &n);
    if(n<=0 || n>30)
        printf("imposibil");
    else
    {
        fact(&f,n);
        printf("rezultatul este: %lld", f );// de la 21! da rezultat gresit
    }
    return 0;
}
