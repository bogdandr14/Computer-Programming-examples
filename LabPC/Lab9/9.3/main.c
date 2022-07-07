#include <stdio.h>
#include <stdlib.h>
struct data
{
    int an,luna,zi;
}*v,aux;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n<=0)
        printf("imposibil");
    else
    {
        v=(struct data*)(malloc(n*sizeof(struct data)));//aloca n spatii de memorie de dimensiunea structurii data
        for(i=0;i<n;i++)
            scanf("%d%d%d", &v[i].an, &v[i].luna, &v[i].zi);
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if(v[i].an>v[j].an || (v[i].an==v[j].an && v[i].luna>v[j].luna) || (v[i].an==v[j].an && v[i].luna==v[j].luna && v[i].zi>v[j].zi))//comparam datele
                {
                    aux=v[i];//interschimbam valorile
                    v[i]=v[j];
                    v[j]=aux;
                }
        for(i=0;i<n;i++)
        {
            printf("%d-", v[i].an);
            if(v[i].luna<10)
                printf("0");
            printf("%d-", v[i].luna);
            if(v[i].zi<10)
                printf("0");
            printf("%d\n", v[i].zi);
        }
        free(v);
    }
    return 0;
}
