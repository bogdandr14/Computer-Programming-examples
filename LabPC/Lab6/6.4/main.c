#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prim(int k){
    int c=1,i;
    for(i=2;i*i<=k;i++)//toate numerele neprime au cel putin un divizor pana in radacina inclusiv
        if(k%i==0)
            c=0;//daca gaseste un divizor, contorul devine 0
    return c;
}
int divizori(int n)
{
    int i;
    for(i=2;i<=n/2;i++)//toti divizorii proprii se afla intre 2 si n/2 inclusiv
        if(n%i==0 && prim(i))//punem conditia ca i sa fie divizor si nr. prim
            printf("%d\n", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    n=abs(n);//n ia valoarea absoluta, fara semn/povitiva
    divizori(n);
    return 0;
}
