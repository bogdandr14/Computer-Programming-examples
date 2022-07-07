#include <stdio.h>
#include <stdlib.h>
long numar, numit;
int n,k,i;
int main()
{
    scanf("%d%d", &n, &k);
    if(k>n || n>12 ||k>12 || n<=0 || k<=0)
        printf("imposibil");
    else
    {
        numar=1;
        numit=1;
        for(i=2;i<=n;i++)
            numar*=i;   //numaratorul primeste valoarea n!
        for(i=2;i<=k;i++)
            numit*=i;   //numitorul primeste valoarea k!
        for(i=2;i<=n-k;i++)
            numit*=i;   //numitorul primeste valoarea k! * (n-k)!
        printf("rezultatul este: %ld", numar/numit);
    }
    return 0;
}
