#include <stdio.h>
#include <stdlib.h>
long putere;
int n,i;
int main()
{
    scanf("%d",&n);
    if(n>15 || n<0)
        printf("imposibil");
    else
    {
        putere=1; //valoarea initiala 3^0
        for(i=1;i<=n;i++)
            putere*=3;
        printf("rezultatul este: %ld",putere);
    }
    return 0;
}
