#include <stdio.h>
#include <stdlib.h>
int n,k;
int factorial(int maxim){
    int i,x=1;//x ia valoarea initiala 0!
    for(i=1;i<=maxim;i++)
        x*=i;
    return x;
}
int main()
{
    scanf("%d%d", &n, &k);
    if(n<=0 || k<=0 || n>12 || k>12 || k>n)
        printf("imposibil");
    else
        printf("rezultatul este: %d", factorial(n)/factorial(n-k)/factorial(k));//combinatiile sunt de forma de forma n!/((n-k)!*k!)
    return 0;
}
