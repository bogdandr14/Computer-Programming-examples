#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *s,n,i;
    float c=0;
    scanf("%d", &n);
    if(n<=0 || n>100)
        printf("imposibil");
    else
    {
        s=(int*)(malloc(n*sizeof(int)));
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
            if(*(s+i)<5)//comparam valoarea de la adresa s[i] cu constanta 5
                c+=1;//incrementam contorul c de fiecare data cand gasim o nota sub 5
        }
        c=c*100.0/(float)n;//tot in c facem procentul notelor sub 5
        printf("media este: %.3f", c );
        free(s);
    }
    return 0;
}
