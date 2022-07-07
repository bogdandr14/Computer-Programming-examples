#include <stdio.h>
#include <stdlib.h>
float putere(float x, int k)
{
    float numar=1;//initializam cu x^0 pentru primul termen al polinomului
    int i;
    for(i=1;i<=k;i++)
        numar*=x;//calculam x^k
    return numar;
}
float polinom(float v[], float x, int n)
{
    int i;
    float P=0;
    for(i=0;i<=n;i++)
        P=P+putere(x,i)*v[i];//adaugam v[i]*x^i la suma polinomului
    return P;
}
int main()
{
    float a[102],x;
    int n,i;
    scanf("%d", &n);
    if(n<0 || n>100)
    {
        printf("imposibil");
    }
    else
    {
        for(i=0;i<=n;i++)
            scanf("%f", &a[i]);
        scanf("%f", &x);
        printf("rezultatul este: %.4f", polinom(a,x,n));
    }
    return 0;
}
